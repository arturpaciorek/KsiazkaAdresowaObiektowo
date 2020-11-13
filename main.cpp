#include <iostream>

#include "KsiazkaAdresowa.h"
using namespace std;

int main()
{
    int idZalogowanegoUzytkownika =0;
    int idOstatniegoAdresata =0;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "KsiazkaAdresowa.txt");

    char wybor;
    while(true)
    {
        idZalogowanegoUzytkownika=ksiazkaAdresowa.pobierzIdZalogowanegoUzytkownika();
        if(idZalogowanegoUzytkownika ==0)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();
        switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.rejestracjaUzytkownika();
            break;
        case '2':
           ksiazkaAdresowa.logowanieUzytkownika();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << " Nie ma takiej opcji w menu. " << endl << endl;
            system("pause");
            break;
        }

        }
        else
            {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();
            switch (wybor)
        {
        case '1':
            ksiazkaAdresowa.dodajAdresata();
            break;
        case '2':
           cout<< "Ta opcja bedzie dostepna w kolejnej wersji programu."<<endl;
           system("pause");
            break;
         case '3':
           cout<< "Ta opcja bedzie dostepna w kolejnej wersji programu."<<endl;
           system("pause");
            break;
            case '4':
           ksiazkaAdresowa.wyswietlWszystkichAdresatow();
            break;
            case '5':
           cout<< "Ta opcja bedzie dostepna w kolejnej wersji programu."<<endl;
           system("pause");
            break;
            case '6':
          cout<< "Ta opcja bedzie dostepna w kolejnej wersji programu."<<endl;
          system("pause");
            break;
            case '7':
           ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
            case '8':
           ksiazkaAdresowa.wylogowanieUzytkownika();
            break;
        case '9':
            exit(0);
            break;
        default:
            cout << endl << " Nie ma takiej opcji w menu. " << endl << endl;
            system("pause");
            break;
        }

            }

    }
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.wczytajUzytkownikowZPliku();

    //idOstatniegoAdresata = ksiazkaAdresowa.WczytajAdresatowZalogowanegouzytkownikaZPliku(idZalogowanegoUzytkownika);
   // idOstatniegoAdresata = ksiazkaAdresowa.dodajAdresata(idZalogowanegoUzytkownika,idOstatniegoAdresata);
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
    //idZalogowanegoUzytkownika = ksiazkaAdresowa.wylogowanieUzytkownika();

   // ;
   //ksiazkaAdresowa.wyswietlWszystkichAdresatow();
   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    return 0;
}
