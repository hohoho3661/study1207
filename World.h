#pragma once

// 어떤 객체가 월드내에 표시되기 위해 필요한 정보
// 


class World
{	
	D3DXMATRIX	matWorld; // 월드행렬을 만들고

	D3DXVECTOR2	pos;	// 포지션
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

