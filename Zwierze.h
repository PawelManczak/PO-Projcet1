#pragma once

#include "Organizm.h"
struct  map;

class Zwierze :
    public Organizm
{
public:
    Zwierze(Polozenie p);
    void akcja(map* m, int ROZMIAR);
    void kolizja() { return; };
    void rysowanie() { return; };
};

