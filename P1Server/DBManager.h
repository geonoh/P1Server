#pragma once
#include "Core.h"

class CDBManager : public CCore
{
public:
	explicit CDBManager() {}
	virtual ~CDBManager() {}

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick() override;
};

