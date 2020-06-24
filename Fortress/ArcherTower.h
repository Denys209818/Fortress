#pragma once
#include "libs.h"
#include "Archer.h"
#include "Ranger.h"
class ArcherTower : public Archer, public Ranger
{
public:
	ArcherTower();
};
