#include "libs.h"
#include "Fortress.h"

Fortress::Fortress()
{
	this->ArcherTower::size = 4;
	this->Catapult::size = 2;
	this->width = 5;
	this->hp = 100;
}

int& Fortress::GetHp()
{
	return this->hp;
}

int& Fortress::GetWidth()
{
	return this->width;
}