#include "Player.h"

CPlayer::CPlayer()
{
}

CPlayer::CPlayer(const CPlayer & player) : CMoveObj(player)
{

}

CPlayer::~CPlayer()
{
}

bool CPlayer::Init()
{
	return true;
}

void CPlayer::Input(float fDeltaTime)
{
}

void CPlayer::Update(float fDeltaTime)
{
}

int CPlayer::LateUpdate(float fDeltaTime)
{
	return 0;
}

void CPlayer::Collision(float fDeltaTime)
{
}

void CPlayer::Render(HDC hDC, float fDeltaTime)
{
	Rectangle(hDC, m_tPos.x, m_tPos.y, m_tPos.x + m_tSize.x, m_tPos.y + m_tSize.y);
}
