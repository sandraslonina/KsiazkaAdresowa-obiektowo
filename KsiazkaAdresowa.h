#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>

#include "UzytkownikMenadzer.h"
#include "AdresatMenadzer.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatMenadzer *adresatMenadzer; /*tworze wskaznik na obiekt*/
    const string NAZWA_PLIKU_Z_ADRESATAMI; /*nie tworze obiektu adresatMenadzer tylko wskaznik na ten obiket,
    //dlatego musze stworzyc nowa zmienna do konstruktora*/

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
        : uzytkownikMenadzer(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
          /*konstruktor KsiazkaAdresowa zawiera przypisanie wartosci do zmiennych nazwaPlikuZUzytkownikami
          (na obiekcie uzytkownikMenadzer) i nazwaPlikuZAdresatami na zmiennej
          obiektu adresatMenadzer nie tworze*/
    {
        adresatMenadzer = NULL; //wskaznik musi byc ustawiony na NULL
    };

    int pobierzIdZalogowanegoUzytkownika();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

    bool czyUzytkownikJestZalogowany();

};

#endif
