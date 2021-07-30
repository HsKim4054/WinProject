#include "Obj.h"

CObj::CObj() : m_iRef(1)
{
}

CObj::~CObj()
{
}

bool CObj::Init()
{
	return true;
}

void CObj::Input(float fDeltaTime)
{
	list<CObj*>::iterator iter;
	list<CObj*>::iterator iterEnd = m_ObjList.end();

	for (iter = m_LayerList.begin(); iter != iterEnd; ++iter)
	{
		(*iter)->LateUpdate(fDeltaTime);
	}
	return 0;
}

void CObj::Update(float fDeltaTime)
{
}

int CObj::LateUpdate(float fDeltaTime)
{
	return 0;
}

void CObj::Collision(float fDeltaTime)
{
}

void CObj::Render(HDC hDC, float fDeltaTime)
{
}
