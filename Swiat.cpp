#include "Swiat.h"
#include <iostream>
using namespace std;

void Swiat::rysujSwiat() {

	for (int x = 0; x < ROZMIAR; x++) {
		for (int y = 0; y < ROZMIAR; y++) {
			if (mapa[x][y].z) mapa[x][y].z->rysowanie();
			else cout << "|   ";
			if (mapa[x][y].r) mapa[x][y].z->rysowanie();
			else cout << "    ";
		}
	}
	cout << endl;
}

void Swiat::wykonajTure() {
	for (int x = 0; x < ROZMIAR; x++) {
		for (int y = 0; y < ROZMIAR; y++) {
			if (mapa[x][y].z) mapa[x][y].z->akcja();
		}
	}

}

void Swiat::dodajZwierze(Zwierze* zwierze) {
	mapa[zwierze->getX()][zwierze->getY()].z = zwierze;

}