#include "KsiazkaAdresowa.h"
#include "UzytkownikMenadzer.h"


int KsiazkaAdresowa::pobierzIdZalogowanegoUzytkownika() 
{
    return uzytkownikMenadzer.pobierzIdZalogowanegoUzytkownika();
}


void KsiazkaAdresowa::rejestracjaUzytkownika()
{
	uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
	uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
	uzytkownikMenadzer.logowanieUzytkownika();
}


void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
	uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika()
{
	uzytkownikMenadzer.wylogowanieUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata() 
{
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatManadzer -> dodajAdresata();
    }
    else {
        cout << "Najpierw musisz sie zalogowac" << endl;
        system ("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() 
{
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany()) {
        adresatManadzer -> wyswietlWszystkichAdresatow();
    }
    else {
        cout << "Najpierw musisz sie zalogowac" << endl;
        system ("pause");
    }
}



