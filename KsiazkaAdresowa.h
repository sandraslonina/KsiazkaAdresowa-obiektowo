#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami) : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami) {
        adresatMenadzer = NULL;
    };
    ~KsiazkaAdresowa() {
        delete adresatMenadzer;
        adresatMenadzer = NULL;
    };

    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void usunAdresata();

    bool czyUzytkownikJestZalogowany();

    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
};

#endif
