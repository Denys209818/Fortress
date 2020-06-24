#include "libs.h"
#include "Ranger.h"

void Ranger::Shoot()
{
	if (this->size > 0)
	{
		cout << "Ranger shoot!!!" << endl;
		Shooter::Shoot();
	}
	else
	{
		cout << "==========" << endl;
		cout << "No arrows found" << endl;
		cout << "==========" << endl;
	}
}