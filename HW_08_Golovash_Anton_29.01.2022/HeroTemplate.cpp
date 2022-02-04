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

void HeroTemplate::useWeapon(int usingWeapon)
{
    switch (usingWeapon)
    {
    case 0:
        cout << "Choose your weapon" << endl;
        break;
    case 1:
        cout << "Using weapon1" << typeid(this).name() << "\t" << this << endl;
        break;
    case 2:
        cout << "Using weapon2" << typeid(this).name() << "\t" << this << endl;
        break;
    case 3:
        cout << "Using weapon3" << typeid(this).name() << "\t" << this << endl;
        break;
    case 4:
        cout << "Using weapon4" << typeid(this).name() << "\t" << this << endl;
        break;
    default:
        break;
    }
}

void HeroTemplate::printHero()
{

}



