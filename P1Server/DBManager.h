#pragma once
#include "Singleton.h"

// DBManager was created by singleton. because of in app purchase.
// so, should be saved in any position

class CDBManager :
	public CSingleton<typename CDBManager>
{
public:
	explicit CDBManager() {}
	virtual ~CDBManager()
	{
		CloseDB();
	}

public:
	void InitDB();
	void CloseDB();

private:
	void SaveCacheToDB();
};

