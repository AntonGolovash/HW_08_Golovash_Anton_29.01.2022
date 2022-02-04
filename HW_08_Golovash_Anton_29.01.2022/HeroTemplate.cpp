#include "HeroTemplate.h"
#include "Jett.h"

HeroTemplate::HeroTemplate()
{
	cout << "HeroTemplate constructor" << endl;
}

HeroTemplate::~HeroTemplate()
{
	cout << "HeroTemplate destructor" << endl;
}

int HeroTemplate::getWeapon(int weaponNumber)
{
	usingWeapon = weaponNumber;
	return usingWeapon;
}

void HeroTemplate::useWeapon()
{
    switch (usingWeapon)
    {
    case 0:
        cout << "Choose your weapon" << endl;
        break;
    case 1:
        ;
        break;
    case 2:
        lowercase_a++;
        break;
    case 3:
        lowercase_a++;
        break;
    case 4:
        lowercase_a++;
        break;
    default:
        other++;
    }
}

void HeroTemplate::printHero()
{

}



