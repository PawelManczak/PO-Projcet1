#include "Wilk.h"
#include <iostream>
#include "map.h"
using namespace std;

Wilk::Wilk(Polozenie p, Swiat* s): Zwierze(p, s) {
	this->polozenie = p;
}

void Wilk::kolizja(map* m, int ROZMIAR) {
	
}
Wilk* Wilk::noweZwierze(Polozenie p, Swiat* s)
{
	return new Wilk(p,s);
}
void Wilk::rysowanie() {
	std::cout << "| w ";
}

void Wilk::akcja(map* m, int ROZMIAR) {
	Zwierze::akcja(m, ROZMIAR);
}

