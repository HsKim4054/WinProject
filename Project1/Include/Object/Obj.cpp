#include "Obj.h"

CObj::CObj()
{
}

CObj::CObj(const CObj & obj)
{
	*this = obj;
}

CObj::~CObj()
{
}

void CObj::Input(float fDeltaTime)
{

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
