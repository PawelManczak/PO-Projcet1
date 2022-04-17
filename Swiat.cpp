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
	int maxInicjatywa = 11;

	for (int i = maxInicjatywa; i > 0; i--) {
		for (int x = 0; x < ROZMIAR; x++) {
			for (int y = 0; y < ROZMIAR; y++) {
				map pole = mapa[getIndex(x, y, ROZMIAR)];
				if (pole.z && pole.z->getRuch()
					&& pole.z->getInicjatywa() == i ) mapa[getIndex(x, y, ROZMIAR)].z->akcja(mapa, ROZMIAR);
			}
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