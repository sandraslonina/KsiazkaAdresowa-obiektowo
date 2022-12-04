#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>
#include <sstream>



#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
	int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    
    string nazwaPlikuZUzytkownikami; //tu nie moge przypisac nazwy, w klasie nie mozna okreslac wartosci, trzeba w konstruktorze
    
     vector <Uzytkownik> uzytkownicy;
     
     
	Uzytkownik podajDaneNowegoUzytkownika(); //prywatna bo jest w srodku innej funkcji
	int pobierzIdNowegoUzytkownika();
	bool czyIstniejeLogin(string login);
	void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
	string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
	string konwerjsaIntNaString(int liczba);
	bool czyPlikJestPusty(fstream &plikTekstowy);

    
public:
	KsiazkaAdresowa();     //konstruktor
	
	void rejestracjaUzytkownika();
	void wypiszWszystkichUzytkownikow();
    
};

