#include "StaticObj.h"

CStaticObj::CStaticObj()
{
}

CStaticObj::CStaticObj(const CStaticObj & obj) : CObj(obj)
{

}

CStaticObj::~CStaticObj()
{
}

void CStaticObj::Input(float fDeltaTime)
{
}

void CStaticObj::Update(float fDeltaTime)
{
}

int CStaticObj::LateUpdate(float fDeltaTime)
{
	return 0;
}

void CStaticObj::Collision(float fDeltaTime)
{
}

void CStaticObj::Render(HDC hDC, float fDeltaTime)
{
}
