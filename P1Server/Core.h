#pragma once
#include "Singleton.h"

class CCore :
	public CSingleton<typename CCore>
{
private:
	virtual void NativeConstruct();
	virtual void NativeDesturct();
	virtual void NativeTick();

protected:

};

