#pragma once
#include "polozenie.h"

class Swiat;
struct map;

class Organizm
{
	char gatunek[5];
	int sila, inicjatywa;
	Swiat* swiat;
	
public:
	char* getGatunek() { return gatunek; };
	Polozenie polozenie;
	Organizm(Polozenie polozenie, Swiat* swiat) {
		this->polozenie = polozenie;
		this->swiat = swiat;
	}
	virtual void akcja(map* m, int ROZMIAR) = 0;
	virtual void kolizja(map* m, int ROZMIAR) = 0;
	virtual void rysowanie() = 0;
	int getX() { return polozenie.x; }
	int getY() { return polozenie.y; }
	Swiat* getSwiat() { return swiat; };
};

