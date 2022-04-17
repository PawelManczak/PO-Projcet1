#pragma once

#include "Organizm.h"

class swiat;

struct  map;

class Zwierze :
    public Organizm
{
    Polozenie losoweWolne, stare;
public:
    
    Zwierze(Polozenie p, Swiat* s);
    void akcja(map* m, int ROZMIAR);
    void kolizja(map* m, int ROZMIAR) { return; };
    void rysowanie() = 0;
    virtual Zwierze* noweZwierze(Polozenie p, Swiat* s) = 0;
    void rozmnazanie(map* mapa, int ROZMIAR);
    //virtual string getType() = 0;

};

