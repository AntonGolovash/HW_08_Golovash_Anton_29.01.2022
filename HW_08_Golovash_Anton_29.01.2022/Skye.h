#pragma once
#include <iostream>
#include "HeroTemplate.h"
using namespace std;

class Skye : public HeroTemplate
{
public:
	Skye();
	~Skye();
private:
	static int skyeNumber;
	void weapon1();
	void weapon2();
	void weapon3();
	void weapon4();
};
