#include <iostream>
#include <vector>
#include <windows.h>


#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
	int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    
     vector <Uzytkownik> uzytkownicy;
     
     
	Uzytkownik podajDaneNowegoUzytkownika(); //prywatna bo jest w srodku innej funkcji
	int pobierzIdNowegoUzytkownika();
	bool czyIstniejeLogin(string login);
    
public:
	void rejestracjaUzytkownika();
	void wypiszWszystkichUzytkownikow();
    
};

