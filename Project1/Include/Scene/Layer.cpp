#include "Layer.h"
#include "../Object/Obj.h"

CLayer::CLayer() : m_iZOrder(0), m_strTag(""), m_pScene(NULL)
{
}

CLayer::~CLayer()
{
	Safe_Release_VecList(m_ObjList);
}

void CLayer::Input(float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_ObjList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->Input(fDeltaTime);
	}
}

void CLayer::Update(float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_ObjList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->Update(fDeltaTime);
	}
}

int CLayer::LateUpdate(float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_ObjList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->LateUpdate(fDeltaTime);
	}
	return 0;
}

void CLayer::Collision(float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_ObjList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->Collision(fDeltaTime);
	}
}

void CLayer::Render(HDC hDC, float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_ObjList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->Render(hDC, fDeltaTime);
	}
}
