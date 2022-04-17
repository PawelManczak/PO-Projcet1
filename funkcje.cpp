#include "polozenie.h"
#include <cstdlib>
#include "map.h"
int getIndex(int x, int y, int customWidth) {
    return x + y * customWidth;
}
Polozenie getLosowePolozenieWPoblizu(Polozenie polozenie, int ROZMIAR) {

	Polozenie stare = polozenie;

	int randX = 0, randY = 0;

	do { // nigdy (0,0)
		randX = -1 + rand() % 3; //od -1 do 1
		randY = -1 + rand() % 3;
	} while ((randX == 0 && randY == 0));

	polozenie.x = polozenie.x + randX;
	if (polozenie.x < 0) polozenie.x = 0;
	if (polozenie.x >= ROZMIAR) polozenie.x = ROZMIAR - 1;

	polozenie.y = polozenie.y + randY;
	if (polozenie.y < 0) polozenie.y = 0;
	if (polozenie.y >= ROZMIAR) polozenie.y = ROZMIAR - 1;

	if (polozenie.x == stare.x && polozenie.y == stare.y) getLosowePolozenieWPoblizu(polozenie, ROZMIAR);
	else return polozenie;
}

Polozenie getLosoweWolneOdZwierzatWPoblizu(Polozenie polozenie, int ROZMIAR, map* mapa) {

	int licznik = 10; //szansa na niepowodzenie
	do {
		polozenie = getLosowePolozenieWPoblizu(polozenie, ROZMIAR);
		licznik--;
	} while (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z && licznik > 0);

	if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z) {
		Polozenie p = { -1,-1 };
		return p;
	}
	return polozenie;
}