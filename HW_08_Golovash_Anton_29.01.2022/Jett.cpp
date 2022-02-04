#include "Jett.h"

Jett::Jett() : HeroTemplate()
{
	jettNumber++;
}

Jett::~Jett()
{
	jettNumber--;
}

void Jett::weapon1()
{
	cout << "Jett weapon1" << endl;
}
void Jett::weapon2()
{
	cout << "Jett weapon2" << endl;
}
void Jett::weapon3()
{
	cout << "Jett weapon3" << endl;
}
void Jett::weapon4()
{
	cout << "Jett weapon4" << endl;
};
