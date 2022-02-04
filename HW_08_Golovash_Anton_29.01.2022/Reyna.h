#pragma once
#include <iostream>
#include "HeroTemplate.h"
using namespace std;

class Reyna : public HeroTemplate
{
public:
	Reyna();
	~Reyna();
private:
	static int reynaNumber;
	void weapon1();
	void weapon2();
	void weapon3();
	void weapon4();
};

