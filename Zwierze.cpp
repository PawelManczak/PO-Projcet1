#include "Zwierze.h"
#include "map.h"
#include "funkcje.h"
#include <cstdlib>
#include <string>
#include <iostream>

Zwierze::Zwierze(Polozenie p, Swiat* s): Organizm(p, s)
{

}

void Zwierze::akcja(map* mapa, int ROZMIAR) {

	int randX = -1 + rand() % 3;
	int randY = -1 + rand() % 3;

	mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z = NULL;

	polozenie.x = polozenie.x + randX;
	if (polozenie.x < 0) polozenie.x = 0;
	if (polozenie.x >= ROZMIAR) polozenie.x = ROZMIAR - 1;

	polozenie.y = polozenie.y + randY;
	if (polozenie.y < 0) polozenie.y = 0;
	if (polozenie.y >= ROZMIAR) polozenie.y = ROZMIAR - 1;

	

	if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z) {
		mapa[0].z = mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z;//this->(polozenie, swiat);
		this->kolizja(mapa, ROZMIAR);
		std::cout << "Asd";
	}
		

	mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z = this;

}