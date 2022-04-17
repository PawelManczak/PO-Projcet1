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





void Zwierze::akcja(map* mapa, int ROZMIAR) {

	Polozenie stare = polozenie;
	polozenie = getLosowePolozenieWPoblizu(polozenie, ROZMIAR);
	//cout << polozenie.x << " " << polozenie.y << " - "<<stare.x<<" "<<stare.y<<endl;
	
	if (mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z) {
		Polozenie losoweWolne = getLosowePolozenieWPoblizu(polozenie, ROZMIAR);
		mapa[getIndex(losoweWolne.x,losoweWolne.y, ROZMIAR)].z = this->noweZwierze(losoweWolne, this->getSwiat());//this->(polozenie, swiat);
		//this->kolizja(mapa, ROZMIAR);
		//d::cout << "BOBOM"<<endl;

		if(mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z)
			mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->changeRuch();
		if(mapa[getIndex(stare.x, stare.y, ROZMIAR)].z)
			mapa[getIndex(stare.x, stare.y, ROZMIAR)].z->changeRuch();
		if(mapa[getIndex(losoweWolne.x, losoweWolne.y, ROZMIAR)].z)
			mapa[getIndex(losoweWolne.x, losoweWolne.y, ROZMIAR)].z->changeRuch();
	}
	else {
		mapa[getIndex(stare.x, stare.y, ROZMIAR)].z = NULL;
		mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z = this;
		if(mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z)
		mapa[getIndex(polozenie.x, polozenie.y, ROZMIAR)].z->changeRuch();
	}
		

	

}