#include "Zwierze.h"
#include "map.h"
#include "funkcje.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
Zwierze::Zwierze(Polozenie p, Swiat* s): Organizm(p, s)
{

}

bool porownajGatunki(Polozenie p1, Polozenie p2, map* mapa, int ROZMIAR) {
	if (mapa[getIndex(p1.x, p1.y, ROZMIAR)].z &&
		mapa[getIndex(p2.x, p2.y, ROZMIAR)].z) {
		if (!strcmp(mapa[getIndex(p2.x, p2.y, ROZMIAR)].z->getGatunek(),
			mapa[getIndex(p1.x, p1.y, ROZMIAR)].z->getGatunek())) {
			/*cout << mapa[getIndex(p2.x, p2.y, ROZMIAR)].z->getGatunek() << " - " <<
			mapa[getIndex(p1.x, p1.y, ROZMIAR)].z->getGatunek() << endl;*/
			return true;

		}
			
	}
	return false;
}


void Zwierze::akcja(map* mapa, int ROZMIAR) {

	Polozenie stare = polozenie;
	polozenie = getLosowePolozenieWPoblizu(polozenie, ROZMIAR);
	//cout << polozenie.x << " " << polozenie.y << " - "<<stare.x<<" "<<stare.y<<endl;
	
	if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z
		&& porownajGatunki(stare, polozenie, mapa, ROZMIAR)) {
		Polozenie losoweWolne = getLosoweWolneOdZwierzatWPoblizu(polozenie, ROZMIAR, mapa);


		if (losoweWolne.x == -1) {
			cout << "ROZMNAZANIE NIEUDANE" << endl;
		}
		else {
			mapa[getIndex(losoweWolne.x, losoweWolne.y, ROZMIAR)].z = this->noweZwierze(losoweWolne, this->getSwiat());//this->(polozenie, swiat);
			//this->kolizja(mapa, ROZMIAR);
			cout << "ROZMNAZANIE" << endl;

			if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z)
				mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->changeRuch();
			if (mapa[getIndex(stare.x, stare.y, ROZMIAR)].z)
				mapa[getIndex(stare.x, stare.y, ROZMIAR)].z->changeRuch();
			if (mapa[getIndex(losoweWolne.x, losoweWolne.y, ROZMIAR)].z)
				mapa[getIndex(losoweWolne.x, losoweWolne.y, ROZMIAR)].z->changeRuch();
		}
	}
	else if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z
		&& !porownajGatunki(stare, polozenie, mapa, ROZMIAR)) {
		cout << "FIGHT"<<endl;
		cout << mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->getSila() << " /" << endl;
		if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->getSila() >
			mapa[getIndex(stare.x, stare.y, ROZMIAR)].z->getSila()) {
			mapa[getIndex(stare.x, stare.y, ROZMIAR)].z = NULL;
		}
		else {
			mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z = mapa[getIndex(stare.x, stare.y, ROZMIAR)].z;
			mapa[getIndex(stare.x, stare.y, ROZMIAR)].z = NULL;
			
		}
	}
	else {
		mapa[getIndex(stare.x, stare.y, ROZMIAR)].z = NULL;
		mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z = this;
		if(mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z)
		mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->changeRuch();
	}
		

	

}