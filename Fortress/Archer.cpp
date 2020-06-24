#include "libs.h"
#include "Archer.h"

void Archer::Shoot()
{
	if (this->size > 0)
	{
		cout << "Archer shoot!!!" << endl;
		Shooter::Shoot();
	}
	else
	{
		cout << "==========" << endl;
		cout << "No arrows found" << endl;
		cout << "==========" << endl;
	}
}