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