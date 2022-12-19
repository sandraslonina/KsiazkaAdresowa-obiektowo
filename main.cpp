#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main() {

    int idZalogowanegoUzytkownika;

    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    //ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();

    //ksiazkaAdresowa.wylogowanieUzytkownika();

    return 0;
}


