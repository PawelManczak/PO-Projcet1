// POProjekt1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Swiat.h"
#include "Wilk.h"

using namespace std;

int main()
{
    Swiat swiat = Swiat();
    string command;

    Polozenie p = {0, 0 };
    Polozenie p2 = { 0, 0 };
   
    Wilk wilk =  Wilk(p, &swiat);
    Wilk wilk2 = Wilk(p2, &swiat);
    while (cin>>command) {
        if (command == "e") break;
        swiat.dodajZwierze(&wilk);
        swiat.dodajZwierze(&wilk2);

        swiat.wykonajTure();
        swiat.rysujSwiat();
    }

    std::cout << "Hello World!\n";
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
