#pragma once
#include "Zwierze.h"
class Owca :
    public Zwierze
{

    char gatunek[5] = "owca";
    int sila = 4;
    int inicjatywa = 4;
public:
    Owca(Polozenie p, Swiat* s);
    void rysowanie();
    void akcja(map* m, int ROZMIAR);
    void kolizja(map* m, int ROZMIAR);
    Owca* noweZwierze(Polozenie p, Swiat* s);
    char* getGatunek() { return gatunek; };
    int getSila() { return sila; };
    int getInicjatywa() { return inicjatywa; };
};

