// -------------------------------------------------------------------------
//    @FileName         :    NFIRecordManager.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2012-12-17
//    @Module           :    NFIRecordManager
//
// -------------------------------------------------------------------------

#ifndef _NFI_RECORDMANAGER_H_
#define _NFI_RECORDMANAGER_H_

#include "NFIRecord.h"
#include "NFMap.h"

class NFIRecordManager
    : public NFMapEx<std::string, NFIRecord>
{
public:
    virtual ~NFIRecordManager() {}
    virtual NF_SHARE_PTR<NFIRecord> AddRecord(const NFIDENTID& self, const std::string& strRecordName, const NFIDataList& TData, const NFIDataList& keyList, const NFIDataList& descData, const NFIDataList& tagData, const NFIDataList& relateRecordData, const int nRows, bool bPublic,  bool bPrivate,  bool bSave, bool bView, int nIndex) = 0;
    virtual NFIDENTID Self() = 0;
    virtual void GetRelationRows(const std::string& strScrRecord, const std::string& strSrcTag, const NFIDataList& var, const std::string& strRelatedRecord, NFIDataList& outRowList) = 0;

    virtual const std::map<std::string, int>& GetRecordIndex() = 0;
    virtual const int GetRecordIndex(const std::string& strRecordName) = 0;

	//////////////////////////////////////////////////////////////////////////

	virtual bool SetRecordInt(const std::string& strRecordName, const int nRow, const int nCol, const NFINT64 nValue) = 0;
	virtual bool SetRecordFloat(const std::string& strRecordName, const int nRow, const int nCol,  const float fValue) = 0;
	virtual bool SetRecordDouble(const std::string& strRecordName, const int nRow, const int nCol, const double dwValue) = 0;
	virtual bool SetRecordString(const std::string& strRecordName, const int nRow, const int nCol, const std::string& strValue) = 0;
	virtual bool SetRecordObject(const std::string& strRecordName, const int nRow, const int nCol, const NFIDENTID& obj) = 0;

	virtual bool SetRecordInt(const std::string& strRecordName, const int nRow, const std::string& strColTag, const NFINT64 value) = 0;
	virtual bool SetRecordFloat(const std::string& strRecordName, const int nRow, const std::string& strColTag, const float value) = 0;
	virtual bool SetRecordDouble(const std::string& strRecordName, const int nRow, const std::string& strColTag, const double value) = 0;
	virtual bool SetRecordString(const std::string& strRecordName, const int nRow, const std::string& strColTag, const std::string& value) = 0;
	virtual bool SetRecordObject(const std::string& strRecordName, const int nRow, const std::string& strColTag, const NFIDENTID& value) = 0;

	virtual NFINT64 GetRecordInt(const std::string& strRecordName, const int nRow, const int nCol) = 0;
	virtual float GetRecordFloat(const std::string& strRecordName, const int nRow, const int nCol) = 0;
	virtual double GetRecordDouble(const std::string& strRecordName, const int nRow, const int nCol) = 0;
	virtual const std::string& GetRecordString(const std::string& strRecordName, const int nRow, const int nCol) = 0;
	virtual NFIDENTID GetRecordObject(const std::string& strRecordName, const int nRow, const int nCol) = 0;

	virtual NFINT64 GetRecordInt(const std::string& strRecordName, const int nRow, const std::string& strColTag) = 0;
	virtual float GetRecordFloat(const std::string& strRecordName, const int nRow, const std::string& strColTag) = 0;
	virtual double GetRecordDouble(const std::string& strRecordName, const int nRow, const std::string& strColTag) = 0;
	virtual const std::string& GetRecordString(const std::string& strRecordName, const int nRow, const std::string& strColTag) = 0;
	virtual NFIDENTID GetRecordObject(const std::string& strRecordName, const int nRow, const std::string& strColTag) = 0;

	//////////////////////////////////////////////////////////////////////////
};


#endif
