#pragma once
#include "libs.h"
#include "ArcherTower.h"
#include "Catapult.h"

class Fortress : public ArcherTower, public Catapult
{
private:
	int width;
	int hp;
public:
	Fortress();

	int& GetHp();

	int& GetWidth();
};
