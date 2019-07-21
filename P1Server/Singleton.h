#pragma once
#include "P1Define.h"

template <typename T>
class CSingleton
{
private:
	static T* Instance;

public:
	CSingleton() {}
	~CSingleton() {}

public:
	virtual void NativeConstruct() = 0;
	virtual void NativeDestruct() = 0;

public:
	static T* Get()
	{
		printf("CSingleton::GetInstance() was called\n");

		if (!Instance)
		{
			Instance = new T;
		}

		return Instance;
	}

	static void Destroy()
	{
		printf("CSingleton::DestroyInstance() was called\n");

		if (Instance)
		{
			delete Instance;
			Instance = nullptr;
		}
	}
};

template<typename T> T* CSingleton<T>::Instance = nullptr;