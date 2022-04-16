#pragma once

#include "Organizm.h"

class swiat;

struct  map;

class Zwierze :
    public Organizm
{
public:
    
    Zwierze(Polozenie p, Swiat* s);
    void akcja(map* m, int ROZMIAR);
    void kolizja(map* m, int ROZMIAR) { return; };
    void rysowanie() { return; };
    Zwierze* noweZwierze(Polozenie p, Swiat* s);
    //virtual string getType() = 0;

};

