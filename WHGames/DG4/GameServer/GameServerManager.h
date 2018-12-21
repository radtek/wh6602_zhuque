#ifndef GAME_SERVER_MANAGER_HEAD_FILE
#define GAME_SERVER_MANAGER_HEAD_FILE

#pragma once

#include <afxwin.h>         // MFC ��������ͱ�׼���
#include <afxext.h>         // MFC ��չ

#include <string>
using namespace std;

#include "GameServiceExport.h"
//////////////////////////////////////////////////////////////////////////

//��Ϸ������������
class CGameServiceManager : public IGameServiceManager
{
	//��������
protected:
	tagGameServiceAttrib				m_GameServiceAttrib;			//��������

	//��������
public:
	//���캯��
	CGameServiceManager(void);
	//��������
	virtual ~CGameServiceManager(void);

	//�����ӿ�
public:
	//�ͷŶ���
	virtual VOID __cdecl Release() { }
	//�Ƿ���Ч
	virtual bool __cdecl IsValid() { return AfxIsValidAddress(this,sizeof(CGameServiceManager))?true:false; }
	//�ӿڲ�ѯ
	virtual void * __cdecl QueryInterface(const IID & Guid, DWORD dwQueryVer);

	//�ӿں���
public:
	//��������
	virtual void * __cdecl CreateTableFrameSink(const IID & Guid, DWORD dwQueryVer);
	//��ȡ����
	virtual void __cdecl GetGameServiceAttrib(tagGameServiceAttrib & GameServiceAttrib);
	//�޸Ĳ���
	virtual bool __cdecl RectifyServiceOption(tagGameServiceOption * pGameServiceOption);
	//��������
	virtual VOID * __cdecl CreateAndroidUserItemSink(REFGUID Guid, DWORD dwQueryVer);
};

//////////////////////////////////////////////////////////////////////////

#endif