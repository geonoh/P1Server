#include "Store.h"

void CStore::ConstructStore()
{
	DBManager.NativeConstruct();
	ThreadManager.NativeConstruct();
}

void CStore::DestructStore()
{
	DBManager.NativeDestruct();
	ThreadManager.NativeDestruct();
}

void CStore::TickStore()
{
	DBManager.NativeTick();
	ThreadManager.NativeTick();
}
