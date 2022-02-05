#pragma once
#include <iostream>
using namespace std;

class HeroTemplate
{
public:
	HeroTemplate();
	~HeroTemplate();
	int getWeapon(int weaponNumber);
	void useWeapon(int usingWeapon);
	void printHero(HeroTemplate* hero);
	HeroTemplate* heroTemplate;

private:
	int usingWeapon = 0;
};