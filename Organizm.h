#pragma once
#include "polozenie.h"
class Swiat;
class Organizm
{
	

	int sila, inicjatywa;
	
public:Polozenie polozenie;
	Organizm(Polozenie polozenie) {
		this->polozenie = polozenie;
	}
	virtual void akcja() = 0;
	virtual void kolizja() = 0;
	virtual void rysowanie() = 0;
	int getX() { return polozenie.x; }
	int getY() { return polozenie.y; }
};
