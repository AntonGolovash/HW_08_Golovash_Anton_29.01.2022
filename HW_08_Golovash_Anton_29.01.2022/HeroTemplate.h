#pragma once
#include <iostream>
using namespace std;

class HeroTemplate
{
public:
	HeroTemplate();
	~HeroTemplate();
	int getWeapon(int weaponNumber);
	void useWeapon();
	void printHero();

private:
	int usingWeapon = 0;

};