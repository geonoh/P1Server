#pragma once
#include "P1Define.h"

template <typename T>
class CSingleton
{
private:
	static T* Instance;

public:
	CSingleton() {}
	~CSingleton() { DestroyInstance(); }

	static T* GetInstance()
	{
		printf("CSingleton::GetInstance() was called\n");

		if (!Instance)
		{
			Instance = new T;
		}

		return Instance;
	}

	static void DestroyInstance()
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