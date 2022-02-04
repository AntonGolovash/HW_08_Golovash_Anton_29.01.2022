#pragma once
#include <iostream>
#include "HeroTemplate.h"
using namespace std;

class Jett : public HeroTemplate
{
public:
	Jett();
	~Jett();
private:
	static int jettNumber;
	void weapon1();
	void weapon2();
	void weapon3();
	void weapon4();
};

