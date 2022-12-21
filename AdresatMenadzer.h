#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"
#include "UzytkownikMenadzer.h"

using namespace std;

class AdresatMenadzer {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;

    PlikZAdresatami plikZAdresatami;
    vector<Adresat> adresaci;

    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:

    AdresatMenadzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika) : plikZAdresatami (nazwaPlikuZAdresatami),  ID_ZALOGOWANEGO_UZYTKOWNIKA (idZalogowanegoUzytkownika) {
        idZalogowanegoUzytkownika = 0;
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };

    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

};

#endif
