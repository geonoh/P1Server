#pragma once
#include "DBManager.h"
#include "ThreadManager.h"
#include "Singleton.h"

class CStore :
	public CSingleton<typename CStore>
{
public:
	CStore() {}
	~CStore() {}

public:
	void ConstructStore();
	void DestructStore();
	void TickStore();

public:
	const CDBManager& GetDBManager() { return DBManager; }
	const CThreadManager& GetThreadManager() { return ThreadManager; }

private:
	CDBManager DBManager;
	CThreadManager ThreadManager;
};
