#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    int idZalogowanegoUzytkownika =0;
    int idOstatniegoAdresata =0;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "KsiazkaAdresowa.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    idZalogowanegoUzytkownika= ksiazkaAdresowa.logowanieUzytkownika();
    idOstatniegoAdresata = ksiazkaAdresowa.WczytajAdresatowZalogowanegouzytkownikaZPliku(idZalogowanegoUzytkownika);
    idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    //idZalogowanegoUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();

   // ksiazkaAdresowa.rejestracjaUzytkownika();
   ksiazkaAdresowa.wyswietlWszystkichAdresatow();
   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
