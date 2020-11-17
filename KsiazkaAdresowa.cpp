#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa :: rejestracjaUzytkownika()
{
    uzytkownikMenedzer.rejestracjaUzytkownika();
};

void KsiazkaAdresowa :: wypiszWszystkichUzytkownikow()
{
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa :: logowanieUzytkownika()
{
    uzytkownikMenedzer.logowanieUzytkownika();
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI, uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }

}
void KsiazkaAdresowa :: zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
void KsiazkaAdresowa :: wylogowanieUzytkownika()
{
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer=NULL;
}

void KsiazkaAdresowa :: dodajAdresata()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->dodajAdresata();
    }
    else
    {
        cout<< "Aby dodac adresata, nalezy sie najpierw zalogowac ! "<<endl;
        system("pause");
    }

};
void KsiazkaAdresowa :: wyswietlWszystkichAdresatow()
{
    if (uzytkownikMenedzer.czyUzytkownikJestZalogowany())
    {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }

};

char KsiazkaAdresowa :: wybierzOpcjeZMenuGlownego()
{
    return uzytkownikMenedzer.wybierzOpcjeZMenuGlownego();
};
char KsiazkaAdresowa :: wybierzOpcjeZMenuUzytkownika()
{
    return uzytkownikMenedzer.wybierzOpcjeZMenuUzytkownika();
};

int KsiazkaAdresowa :: pobierzIdZalogowanegoUzytkownika()
{
    return uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika();
};

void KsiazkaAdresowa :: wyszukajAdresatowPoImieniu()
{
    adresatMenedzer->wyszukajAdresatowPoImieniu();
};

void KsiazkaAdresowa :: wyszukajAdresatowPoNazwisku()
{
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
};
void KsiazkaAdresowa :: edytujAdresata()
{
    adresatMenedzer->edytujAdresata();
};
void KsiazkaAdresowa :: usunAdresata()
{
    adresatMenedzer->usunAdresata();
};
