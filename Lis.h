#pragma once
#include "Zwierze.h"
class Lis :
    public Zwierze
{
    char gatunek[5] = "lis";
    int sila = 3;
    int inicjatywa = 7;
public:
    Lis(Polozenie p, Swiat* s);
    void rysowanie();
    void akcja(map* m, int ROZMIAR);
    void kolizja(map* m, int ROZMIAR);
    Lis* noweZwierze(Polozenie p, Swiat* s);


    char* getGatunek() {
        return gatunek;
    };

    int getSila() { return sila; };
    int getInicjatywa() { return inicjatywa; };
};

