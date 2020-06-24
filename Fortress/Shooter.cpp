#include "libs.h"
#include "Shooter.h"

void Shooter::Shoot()
{
	cout << "-1 " << this->amuniz << endl;
	this->size--;
}

void Shooter::GiveAmunition(string amuniz, int size)
{
	this->amuniz = amuniz;
	this->size = size;
}

Shooter::~Shooter()
{

}