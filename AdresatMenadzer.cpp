#include "AdresatMenadzer.h"


void AdresatMenadzer::dodajAdresata() {

    Adresat adresat;
    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);

    if (plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany" << endl;

    else
        cout << "Blad, nie udalo sie dodac adresata do pliku" << endl;

    system ("pause");
}

Adresat AdresatMenadzer::podajDaneNowegoAdresata() {

    Adresat adresat;

    string imie, nazwisko;

    adresat.ustawId (plikZAdresatami.pobierzIdOstatniegoAdresata()+1);
    adresat.ustawIdUzytkownika (ID_ZALOGOWANEGO_UZYTKOWNIKA);
    
    cin.sync();
    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    adresat.ustawImie(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie));

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNazwisko(MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNumerTelefonu(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawEmail(MetodyPomocnicze::wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdres(MetodyPomocnicze::wczytajLinie());

    return adresat;
}


void AdresatMenadzer::wyswietlWszystkichAdresatow() {
    system("cls");

    if (!adresaci.empty()) {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;

        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++) {
            wyswietlDaneAdresata(*itr);
        }

        cout << endl;

    } else {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }

    system("pause");
}

void AdresatMenadzer::wyswietlDaneAdresata(Adresat adresat) {
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}









