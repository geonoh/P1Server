#pragma once

class CCore
{
public:
	CCore() {}
	~CCore() {}

public:
	virtual void NativeConstruct() = 0;
	virtual void NativeDestruct() = 0;
	virtual void NativeTick() = 0;
};
