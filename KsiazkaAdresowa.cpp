#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa :: rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
};

void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

int KsiazkaAdresowa :: logowanieUzytkownika()
{
    return uzytkownikMenedzer.logowanieUzytkownika();
}
void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
int KsiazkaAdresowa :: wylogowanieUzytkownika()
{
   return uzytkownikMenedzer.wylogowanieUzytkownika();
}
int KsiazkaAdresowa :: WczytajAdresatowZalogowanegouzytkownikaZPliku(int idZalogowanegoUzytkownika)
{
    return adresatMenedzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
};
int KsiazkaAdresowa :: dodajAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata)
{
    return adresatMenedzer.dodajAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);

};
void KsiazkaAdresowa :: wyswietlWszystkichAdresatow()
{
    adresatMenedzer.wyswietlWszystkichAdresatow();
};
