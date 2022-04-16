#pragma once
#include "Zwierze.h"
#include "Organizm.h"
class Wilk :
    public Zwierze
{
   
    int sila = 9;
    int inicjatywa = 5;
public:
    Wilk(Polozenie p);
    void rysowanie();
    void akcja(map* m, int ROZMIAR);
    void kolizja();

};

