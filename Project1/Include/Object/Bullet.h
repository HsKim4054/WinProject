#pragma once
#include "MoveObj.h"
class CBullet :
	public CMoveObj
{
private:
	friend class CObj;
	friend class CScene;

public:
	CBullet();
	CBullet(const CBullet& bullet);
	~CBullet();

private:
	float	m_fLimitDist;
	float	m_fDist;

public:
	void SetBulletDistanace(float fDist)
	{
		m_fLimitDist = fDist;
	}

public:
	virtual bool Init();
	virtual void Update(float fDeltaTime);
	virtual int LateUpdate(float fDeltaTime);
	virtual void Collision(float fDeltaTime);
	virtual void Render(HDC hDC, float fDeltaTime);
	virtual CBullet* Clone();
};

