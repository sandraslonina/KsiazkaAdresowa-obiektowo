#ifndef ADRESATMENADZER_H
#define ADRESATMENADZER_H

#include <iostream>
#include <vector>

#include "Adresat.h"

using namespace std;


class AdresatMenadzer
{
	
	
	vector<Adresat> adresaci;
	 
	Adresat podajDaneNowegoAdresata();
	void wyswietlDaneAdresata(Adresat adresat);
	int pobierzIdNowegoAdresata();
	
public:
	
	
	void dodajAdresata();
	
};

#endif