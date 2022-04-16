#include "Wilk.h"
#include <iostream>
#include "map.h"

Wilk::Wilk(Polozenie p): Zwierze(p) {
	this->polozenie = p;
}

void Wilk::kolizja() {
	int hehe = 0;
}
void Wilk::rysowanie() {
	std::cout << "| w ";
}

void Wilk::akcja(map* m, int ROZMIAR) {
	Zwierze::akcja(m, ROZMIAR);
}