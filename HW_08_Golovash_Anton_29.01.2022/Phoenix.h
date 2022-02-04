#pragma once
#include <iostream>
#include "HeroTemplate.h"
using namespace std;

class Phoenix : public HeroTemplate
{
public:
	Phoenix();
	~Phoenix();
private:
	static int phoenixNumber;
	void weapon1();
	void weapon2();
	void weapon3();
	void weapon4();
};

