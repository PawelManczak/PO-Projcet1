#include "Wilk.h"
#include <iostream>

Wilk::Wilk(Polozenie p): Zwierze(p) {
	this->polozenie = p;
}

void Wilk::rysowanie() {
	std::cout << "| w ";
}