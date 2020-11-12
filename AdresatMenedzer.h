#ifndef ADRESATKMENEDZER_H
#define ADRESATKMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>

#include "Uzytkownik.h"
#include "PlikZAdresatami.h"
#include "MetodyPomocnicze.h"
#include "Adresat.h"
using namespace std;

class AdresatMenedzer
{
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;

    PlikZAdresatami plikZAdresatami;


public:
    AdresatMenedzer(string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami){
    };
    int wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void wyswietlWszystkichAdresatow();
    void wyswietlDaneAdresata(Adresat adresat);
    void dopiszAdresataDoPliku(Adresat adresat);
    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    int dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);

};
#endif
