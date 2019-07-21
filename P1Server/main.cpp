#include "P1Define.h"
#include "DBManager.h"
#include "ThreadManager.h"

void DeclareObject();
void Initializer();
void Destroyer();

int main()
{
	Initializer();
	// DB Thread

	// Game Logic Thread - World, Lobby

	// 
	Destroyer();
}

void DeclareObject()
{

}

void Initializer()
{
	CThreadManager ThreadManager;

	CDBManager::GetInstance()->InitDB();

}

void Destroyer()
{
	CDBManager::GetInstance()->CloseDB();
}
