#pragma once
#include "libs.h"
class Shooter
{
public:
	string amuniz;
	int size;

	void Shoot();

	void GiveAmunition(string amuniz, int size);

	virtual ~Shooter();

};
