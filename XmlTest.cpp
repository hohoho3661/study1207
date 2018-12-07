#include "GameSys.h"
#include "User.h"
#include "XmlTest.h"

#include "Player.h"

XmlTest::XmlTest()
{
	player = new Player;
}

XmlTest::~XmlTest()
{
}

bool XmlTest::Init()
{
	return true;
}

void XmlTest::Update()
{
	player->Update();
}

void XmlTest::Render()
{
	player->Render();
}
