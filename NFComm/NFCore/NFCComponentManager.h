// -------------------------------------------------------------------------
//    @FileName         :    NFCComponentManager.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2014-02-17
//    @Module           :    NFCComponentManager
//
// -------------------------------------------------------------------------

#ifndef _NFC_COMPONENT_MANAGER_H_
#define _NFC_COMPONENT_MANAGER_H_

#include "NFIComponentManager.h"
#include "NFComm/NFPluginModule/NFIdentID.h"

class NFCComponentManager : public NFIComponentManager
{
private:
	NFCComponentManager()
	{

	}

public:
    NFCComponentManager(const NFIDENTID& self)
    {
        mSelf = self;
    }

    virtual ~NFCComponentManager()
    {
        ClearAll();
    }

    virtual bool Init();

    virtual bool AfterInit();

    virtual bool BeforeShut();

    virtual bool Shut();

    virtual bool Execute(const float fLasFrametime, const float fStartedTime);

	virtual NFIDENTID Self();

protected:

	virtual bool AddComponent(const std::string& strComponentName, NF_SHARE_PTR<NFIComponent> pNewComponent);

private:
    NFIDENTID mSelf;
};

#endif