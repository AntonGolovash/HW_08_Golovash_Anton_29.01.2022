#include <iostream>
#include <map>
#include "HeroTemplate.h"
#include "HeroTemplate.cpp"
#include "Jett.h"
#include "Jett.cpp"
#include "Skye.h"
#include "Skye.cpp"
#include "Reyna.h"
#include "Reyna.cpp"
#include "Phoenix.h"
#include "Phoenix.cpp"

using namespace std;

int main()
{
	int choice = 0;
	cout << "Choose the Hero\n"
		"Jett, Enter 1\n"
		"Skye, Enter 2\n"
		"Reyna, Enter 3\n"
		"Phoenix, Enter 4\n" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		Jett jett;
		break;
	case 2:
		Skye skye;
		break;
	case 3:
		Reyna reyna;
		break;
	case 4:
		Phoenix phoenix;
		break;
	default:
		break;
	}

	Jett jett2;
	Skye skye2;
	Reyna reyna2;
	Phoenix phoenix2;
	map<HeroTemplate, int> herousMap;
	typedef pair<HeroTemplate, int> pair;

	herousMap.insert(pair(jett2,1));
	herousMap.insert(pair(skye2,2));
	herousMap.insert(pair(reyna2,3));
	herousMap.insert(pair(phoenix2,4));

	jett2.useWeapon(jett2.getWeapon(1));
	jett2.printHero();

	skye2.useWeapon(skye2.getWeapon(2));
	skye2.printHero();

	reyna2.useWeapon(reyna2.getWeapon(3));
	reyna2.printHero();

	phoenix2.useWeapon(phoenix2.getWeapon(4));
	phoenix2.printHero();

}