#include "KsiazkaAdresowa.h"

int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() {
    return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika () {
    uzytkownikMenadzer.logowanieUzytkownika();
    
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer = new AdresatMenadzer(uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenadzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() {
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer.dodajAdresata();

    } else {
        cout << "Najpierw musisz sie zalogowac" << endl;
        system ("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatMenadzer.wyswietlWszystkichAdresatow();

    } else {
        cout << "Najpierw musisz sie zalogowac" << endl;
        system ("pause");
    }
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    return uzytkownikMenadzer.czyUzytkownikJestZalogowany();
}



