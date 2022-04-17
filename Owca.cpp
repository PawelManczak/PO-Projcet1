#include "owca.h"
#include <iostream>
#include "map.h"

Owca::Owca(Polozenie p, Swiat* s) : Zwierze(p, s) {
	this->polozenie = p;
}
Owca* Owca::noweZwierze(Polozenie p, Swiat* s)
{
	return new Owca(p, s);
}

void Owca::kolizja(map* m, int ROZMIAR) {}
void Owca::rysowanie() {
	std::cout << "| o ";
}

void Owca::akcja(map* m, int ROZMIAR) {
	Zwierze::akcja(m, ROZMIAR);
}