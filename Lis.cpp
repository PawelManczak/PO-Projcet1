#include "Lis.h"
#include <iostream>

Lis::Lis(Polozenie p, Swiat* s) : Zwierze(p, s) {
	this->polozenie = p;
}

void Lis::kolizja(map* m, int ROZMIAR) {

}
Lis* Lis::noweZwierze(Polozenie p, Swiat* s)
{
	return new Lis(p, s);
}
void Lis::rysowanie() {
	std::cout << "| L ";
}

void Lis::akcja(map* m, int ROZMIAR) {
	Zwierze::akcja(m, ROZMIAR);
}


