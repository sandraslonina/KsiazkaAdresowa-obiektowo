#include "Uzytkownik.h"

void Uzytkownik::ustawId(int noweId)  
{
	if (noweId >= 0) //walidacja - zabezoieczenie przed z�ym zapisem
	id = noweId;
}  
void Uzytkownik::ustawLogin(string nowyLogin)
{
	login = nowyLogin;
}

void Uzytkownik::ustawHaslo(string noweHaslo)
{
	haslo = noweHaslo;
}

int Uzytkownik::pobierzId()
{
	return id;
}
string Uzytkownik::pobierzLogin()
{
	return login;
}
string Uzytkownik::pobierzHaslo()
{
	return haslo;
}
