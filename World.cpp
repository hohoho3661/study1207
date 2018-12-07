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
	
	D3DXMatrixIdentity(&matWorld); // ��������� �׵������ ���� �ʱ�ȭ�Ѵ�.
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

	D3DXMatrixRotationYawPitchRoll(&matR, rot.y, rot.x, rot.z); // �Ѳ����� �����̼��ϴ� �Լ�,,  y, x, z ����                  0,1,0�� ��溤�ͷ� ������ �ϴ��� ����
	R = IP * matR * P;

	D3DXMatrixTranslation(&T, pos.x, pos.y, 0);

	matWorld = S * R * T;
}

void World::SetWorld()
{
	DEVICE->SetTransform(D3DTS_WORLD, &matWorld); // ������ ���� ����
}
