#include "HeroTemplate.h"
#include "Jett.h"

HeroTemplate::HeroTemplate()
{
    this->heroTemplate = new HeroTemplate();
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
        cout << typeid(this).name() << "\tUsing weapon1" << this << endl;
        break;
    case 2:
        cout << typeid(this).name() << "\tUsing weapon2" << this << endl;
        break;
    case 3:
        cout << typeid(this).name() << "\tUsing weapon3" << this << endl;
        break;
    case 4:
        cout << typeid(this).name() << "\tUsing weapon4" << this << endl;
        break;
    default:
        break;
    }
}

void HeroTemplate::printHero(HeroTemplate* hero)
{

}


