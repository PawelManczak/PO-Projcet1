#include "Swiat.h"
#include "funkcje.h"
using namespace std;

void Swiat::rysujSwiat() {

	for (int y = 0; y < ROZMIAR; y++) {
		for (int x = 0; x < ROZMIAR; x++) {
			if (mapa[getIndex(x,y, ROZMIAR)].z) mapa[getIndex(x, y, ROZMIAR)].z->rysowanie();
			else cout << "|   ";
			if (mapa[getIndex(x, y, ROZMIAR)].r) mapa[getIndex(x, y, ROZMIAR)].z->rysowanie();
			else cout << "    ";
		}
	}
	cout << endl;
}

void Swiat::wykonajTure() {
	for (int x = 0; x < ROZMIAR; x++) {
		for (int y = 0; y < ROZMIAR; y++) {
			if (mapa[getIndex(x, y, ROZMIAR)].z && mapa[getIndex(x, y, ROZMIAR)].z->getRuch()) mapa[getIndex(x, y, ROZMIAR)].z->akcja(mapa, ROZMIAR);
		}
	}

	//zmiana wszystkim
	for (int i = 0; i < ROZMIAR * ROZMIAR; i++) {
		if (mapa[i].z) mapa[i].z->changeRuch();
	}
}

void Swiat::dodajZwierze(Zwierze* zwierze) {
	
	mapa[getIndex(zwierze->getX(), zwierze->getY(), ROZMIAR)].z = zwierze;

}