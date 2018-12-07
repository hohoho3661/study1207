#pragma once

class Player;

class XmlTest : public Scene
{
	Player* player;
public:
	XmlTest();
	~XmlTest();

	bool Init();
	void Update();
	void Render();
};

