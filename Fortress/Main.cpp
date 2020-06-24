#include "libs.h"
#include "Shooter.h"
#include "Archer.h"
#include "Ranger.h"
#include "Catapult.h"
#include "ArcherTower.h"
#include "Fortress.h"


void main()
{
	Fortress * f = new Fortress;
	int counter = 1;
	for (int i = 0; i < 3; i++) 
	{
		cout << counter << " Attack: " << endl;
		counter++;
	f->ArcherTower::Archer::Shoot();
	_getch(); 
	system("cls");

	}

	for (int i = 0; i < 2; i++) 
	{
		cout << counter << " Attack " << endl;
		counter++;
	f->ArcherTower::Ranger::Shoot();
	_getch();
	system("cls");
	}

	cout << counter << " Attack " << endl;
	counter++;
    f->Catapult::Shoot();
	_getch();
	system("cls");

	cout << "Arrows: " << f->ArcherTower::size << endl;
	cout << "Stones: " << f->Catapult::size << endl;
	cout << "Hit-point - " << f->GetHp() << "%" << endl;
	cout << "Width - " << f->GetWidth() << "m" << endl;
	_getch();




}