#include "DBManager.h"

void CDBManager::InitDB()
{
	printf("CDBManager::InitDB() was called\n");

	// Set redis -> Only raid combat.

	// Set DB (mysql)

	return;
}

void CDBManager::CloseDB()
{
	printf("CDBManager::CloseDB() was called\n");
	SaveCacheToDB();
}

void CDBManager::SaveCacheToDB()
{
	printf("CDBManager::SaveCacheToDB() was called\n");

	// save cache to db

	return;
}
