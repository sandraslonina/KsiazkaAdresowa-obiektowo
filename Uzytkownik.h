#ifndef UZYTKOWNIK_H //bo uzytkownik.h wystepuje w kilcku plikach w naglowku
#define UZYTKOWNIK_H

#include <iostream>


using namespace std;

class Uzytkownik
{
	int id;
    string login; 
    string haslo;
    
public:
	void ustawId(int noweId);    //setery
	void ustawLogin(string nowyLogin);
	void ustawHaslo(string noweHaslo);
	
	int pobierzId();  //getery
	string pobierzLogin();
	string pobierzHaslo();
	
	
};

#endif