#pragma once
#include "Organizm.h"
class Zwierze :
    public Organizm
{
public:
    Zwierze(Polozenie p);
    void akcja() { return; };
    void kolizja() { return; };
    void rysowanie() { return; };
};

