#pragma once
#include "Core.h"

class CThreadManager : public CCore
{
public:
	explicit CThreadManager() {}
	virtual ~CThreadManager() {}

public:
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick() override;
};
