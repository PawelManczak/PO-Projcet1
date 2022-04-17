#pragma once
#include "polozenie.h"

class Swiat;
struct map;

class Organizm
{
	bool ruch = true;
	char gatunek[5];
	int sila, inicjatywa;
	Swiat* swiat;
	
public:
	virtual char* getGatunek() = 0;
	Polozenie polozenie;
	Organizm(Polozenie polozenie, Swiat* swiat) {
		this->polozenie = polozenie;
		this->swiat = swiat;
	}
	virtual void akcja(map* m, int ROZMIAR) = 0;
	virtual void kolizja(map* m, int ROZMIAR) = 0;
	virtual void rysowanie() = 0;
	int getX() { return polozenie.x; };
	int getY() { return polozenie.y; }
	Swiat* getSwiat() { return swiat; };
	bool getRuch() { return ruch; }
	void changeRuch() { ruch ? ruch = false : ruch = true; };
	virtual int getSila() = 0;
	virtual int getInicjatywa() = 0;
};

