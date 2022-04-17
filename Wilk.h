#pragma once
#include "Zwierze.h"
#include "Organizm.h"
class Wilk :
    public Zwierze
{
    char gatunek[5] = "wilk";
    int sila = 9;
    int inicjatywa = 5;
public:
    Wilk(Polozenie p, Swiat* s);
    void rysowanie();
    void akcja(map* m, int ROZMIAR);
    void kolizja(map* m, int ROZMIAR);
    Wilk* noweZwierze(Polozenie p, Swiat* s);

};