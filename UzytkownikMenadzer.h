#ifndef UZYTKOWNIKMENADZER_H 
#define UZYTKOWNIKMENADZER_H


#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>


#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikMenadzer
{
	int idZalogowanegoUzytkownika;
	vector <Uzytkownik> uzytkownicy;
	
	Uzytkownik podajDaneNowegoUzytkownika(); //prywatna bo jest w srodku innej funkcji
	int pobierzIdNowegoUzytkownika();
	bool czyIstniejeLogin(string login);
	PlikZUzytkownikami plikZUzytkownikami;

	
	public:  
		UzytkownikMenadzer(string nazwaPlikuZUzytkownikami) : plikZUzytkownikami (nazwaPlikuZUzytkownikami) 
		{
			idZalogowanegoUzytkownika = 0 ;
        uzytkownicy = plikZUzytkownikami.wczytajUzytkownikowZPliku();
        };
void rejestracjaUzytkownika();
void wypiszWszystkichUzytkownikow();
void wczytajUzytkownikowZPliku();
void logowanieUzytkownika();
void zmianaHaslaZalogowanegoUzytkownika();
int pobierzIdZalogowanegoUzytkownika();
void wylogowanieUzytkownika();
bool sprawdzCzyUzytkownikJestZalogowany();


};

#endif