#include "GameSys.h"
#include "User.h"
#include "World.h"

World::World()
{
	scale	= { 1, 1 };
	rot		= { 0, 0, 0 };
	pos		= { 0, 0 };

	pivot	= { 0, 0 };
	size	= { 0,0 };
	
	D3DXMatrixIdentity(&matWorld); // 월드행렬은 항등행렬을 만들어서 초기화한다.
}

World::~World()
{
}

void World::Update()
{
	D3DXMATRIX	P, IP;
	D3DXMATRIX	S, R, T;
	D3DXMATRIX	matS, matR;

	D3DXMatrixTranslation(&P, pivot.x, pivot.y, 0);
	D3DXMatrixInverse(&IP, NULL, &P);

	D3DXMatrixScaling(&matS, scale.x, scale.y, 1);

	S = IP * matS * P;

	D3DXMatrixRotationYawPitchRoll(&matR, rot.y, rot.x, rot.z); // 한꺼번에 로테이션하는 함수,,  y, x, z 순서                  0,1,0을 상방벡터로 놓으면 하늘은 고정
	R = IP * matR * P;

	D3DXMatrixTranslation(&T, pos.x, pos.y, 0);

	matWorld = S * R * T;
}

void World::SetWorld()
{
	DEVICE->SetTransform(D3DTS_WORLD, &matWorld); // 생성한 월드 적용
}
