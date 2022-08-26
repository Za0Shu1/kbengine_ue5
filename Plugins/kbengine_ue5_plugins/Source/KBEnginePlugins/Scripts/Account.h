#pragma once

#include "../Engine/KBECommon.h"
#include "../Engine/AccountBase.h"

namespace KBEngine
{
	class Account : public AccountBase
	{
	public:
		Account();
		virtual ~Account();
		virtual void __init__() override;
		virtual void onDestroy() override;

	private:

	};
	
}