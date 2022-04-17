#pragma once
#include "Organizm.h"
#include "Zwierze.h"
#include "Roslina.h"
#include "map.h"
#include <iostream>


class Swiat
{
public:

	void dodajZwierze(Zwierze* zwierze);
	void wykonajTure();
	void rysujSwiat();
	map* getMapa() { return mapa; };

private:

	static const int ROZMIAR = 5;
	map mapa[ROZMIAR*ROZMIAR];
};

