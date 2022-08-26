
#include "Account.h"
#include "../Engine/KBEngine.h"
#include "../Engine/KBEvent.h"

namespace KBEngine
{
	KBEngine::Account::Account()
	{

	}

	KBEngine::Account::~Account()
	{

	}

	void KBEngine::Account::__init__()
	{
		// ��¼
		UKBEventData_onLoginSuccessfully* EventData = NewObject<UKBEventData_onLoginSuccessfully>();
		EventData->entity_uuid = KBEngineApp::getSingleton().entity_uuid();
		EventData->entity_id = id();
		KBENGINE_EVENT_FIRE("OnLoginSuccessfully", EventData);
	}

	void KBEngine::Account::onDestroy()
	{
		// ע��
		KBENGINE_DEREGISTER_ALL_EVENT();
	}
}

