#include "libs.h"
#include "Catapult.h"

Catapult::Catapult()
{
	this->amuniz = "Stone";
}

void Catapult::Shoot()
{
	if (this->size > 0)
	{
		cout << "Catapult shoot!!!" << endl;
		Shooter::Shoot();
	}
	else
	{
		cout << "==========" << endl;
		cout << "No stones found" << endl;
		cout << "==========" << endl;
	}
}