#include "PlikTekstowy.h"

string PlikTekstowy :: pobierzNazwePliku()
{
    return NAZWA_PLIKU;
}

bool PlikTekstowy :: czyPlikJestPusty()
{   fstream plikTekstowyA;
    bool pusty = true;
    plikTekstowyA.open(pobierzNazwePliku().c_str(), ios::app);

    if (plikTekstowyA.good() == true)
    {
        plikTekstowyA.seekg(0, ios::end);
        if (plikTekstowyA.tellg() != 0)
            pusty = false;
    }

    plikTekstowyA.close();
    return pusty;
}
