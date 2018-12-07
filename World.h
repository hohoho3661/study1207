#pragma once

// � ��ü�� ���峻�� ǥ�õǱ� ���� �ʿ��� ����
// 


class World
{	
	D3DXMATRIX	matWorld; // ��������� �����

	D3DXVECTOR2	pos;	// ������
	D3DXVECTOR2	scale;
	D3DXVECTOR3	rot;

	D3DXVECTOR2	size;

	D3DXVECTOR2	pivot;



public:
	World();
	~World();

	void Update();

	D3DXVECTOR2 GetPosition() const { return pos; }
	D3DXVECTOR2 GetScale() const { return scale; }
	D3DXVECTOR3 GetRotation() const { return rot; }
	D3DXVECTOR2 GetSize() const { return size; }


	void SetPosition(D3DXVECTOR2 _pos) { pos = _pos; }
	void SetScale(D3DXVECTOR2 _scale) { scale = _scale; }
	void SetRotation(D3DXVECTOR3 _rot) { rot = _rot; }

	void SetSize(D3DXVECTOR2 _size) { size = _size; }
	void SetPivot(D3DXVECTOR2 _pivot) { pivot = _pivot; }


	void SetWorld();
};

