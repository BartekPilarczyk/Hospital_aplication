#include "functions.h"

using namespace std;

int main() {

    int choose;
    int dni;
    int miesiace;
    int lata;
    int pobierzdata;
    int pobierzrok;
    double godzina;

    string ulica1 = "Brzeska 33";
    string ulica2 = "Zienkiewicza 24";
    string ortopeda1 = "Jan Kowalski";
    string pediatra1 = "Karolina Małyga";
    string ortopeda2 = "Stanislaw Kowalski";
    string pediatra2 = "Malgorzata Zienkiewicz";
    string imie;
    string nazwisko;

    fstream plik;

    while(true) {

        cout << "Menu:" << endl;
        cout << "Proszę wybrać termin wizyty wybierając 1" << endl;
        cout << "Wybierz 2 aby wyjść" << endl;

        cin >> choose;

        if (choose != 1) {
            break;
        }
        cout << "Podaj swoje imie: " << endl;
        cin >> imie;
        cout << "Podaj swoje nazwisko: " << endl;
        cin >> nazwisko;

        cout << "Wpisz w którym dniu chciałbyś dostać się do lekarza?" << endl;
        cin >> dni;

        if (dni <= 0 || dni > 31) {
            cout << "Error: podaj prawidlowa date! " << endl;
            continue;
        }

        cout << "Wpisz w którym miesiącu chciałbyś dostać się do lekarza?" << endl;
        cin >> miesiace;

        if (miesiace < 1 || miesiace > 12) {
            cout<<"Proszę podać prawidłowy miesiąc! ";
            continue;
        }

        while (true) {
            cout << "Wpisz w którym roku chciałbyś dostać się do lekarza?, zapisać możesz się do 2030roku" << endl;
            cin >> pobierzdata;

            if(pobierzdata <= 2020 || pobierzdata >= 2030) {
                cout << "Wybierz prawidłowy rok!" << endl;
                break;
            }

            while (true) {

                if((dni%3) == 0) {

                    cout << "Dzis przyjmuje lekarz:" << endl;
                    cout << "Pediatra: " << pediatra1 << endl;
                    cout << "Ortopeda: " << ortopeda1 << endl;
                    cout << "Wybierz lekarza do którego chcesz się dostać wpisując 1 lub 2:" << endl;
                    cin >> choose;

                    if(choose == 1) {

                        while (true) {

                            cout << "Lekarz przyjmuje w godzinach 12-17 w pokoju nr 225" << endl;
                            cout << "Na ulicy: " << ulica1 << endl;
                            cout << "Podaj godzinę na którą chcesz się zapisać" << endl;
                            cin >> godzina;

                            if(godzina >= 14.0 || godzina <= 18.0) {


                                plik.open("db/pediatra1.txt",ios::out | ios::app |ios::in);

                                    if(plik.good() == false) {
                                        cout << "Wizyta jest już zarezerwowana" << endl;
                                    } else {

                                            cout << "Zostałeś zapisany do pediatry, Pani " << pediatra1 << endl;
                                            plik << "Imie pacjenta: " << imie << endl;
                                            plik << "Nazwisko pacjenta: " << nazwisko << endl;
                                            plik << "Lekarz, Pani: " << pediatra1 << endl;
                                            plik << "ID wizyty: " << getRandomId() << endl;
                                            plik << "Dzien " << dni << endl;
                                            plik << "Miesiac " << miesiace << endl;
                                            plik << "Rok " << pobierzdata << endl;
                                            plik << "Godzina " << godzina << endl;
                                            plik << " " << endl;
                                            plik.close();
                                        }


                            } else {
                                cout << "Podaj prawidłową godzine" << endl;
                                break;
                            }
                            break;
                        }

                        break;

                    } else if (choose == 2) {

                        while (true) {
                            cout << "Lekarz przyjmuje w godzinach 12-17 w pokoju nr 205" << endl;
                            cout << "Na ulicy: " << ulica2 << endl;
                            cout << "Podaj godzinę na którą chcesz się zapisać" << endl;
                            cin >> godzina;

                            if(godzina >= 12.0 || godzina <= 17.0) {

                                plik.open("db/pediatra1.txt",ios::out | ios::app |ios::in);

                                if(plik.good() == false) {
                                    cout << "Wizyta jest już zarezerwowana" << endl;
                                } else {

                                    cout << "Zostałeś zapisany do ortopedy, Pana " << ortopeda1 << endl;
                                    plik << "Imie pacjenta: " << imie << endl;
                                    plik << "Nazwisko pacjenta: " << nazwisko << endl;
                                    plik << "ID wizyty: " << getRandomId() << endl;
                                    plik << "Lekarz, Pan: " << ortopeda1 << endl;
                                    plik << "Dzien " << dni << endl;
                                    plik << "Miesiac " << miesiace << endl;
                                    plik << "Rok " << pobierzdata << endl;
                                    plik << "Godzina " << godzina << endl;
                                    plik << " " << endl;
                                    plik.close();
                                }

                            } else {
                                cout << "Wpisz prawidlowa godzine" << endl;
                                break;
                            }
                          break;
                        }

                        break;

                    } else {
                        cout << "Wybierz liczbę od 1 do 2!" << endl;
                        continue;
                    }

                } else if ((dni%3) == 1) {

                    cout << "W tym dniu przyjmuje:" << endl;
                    cout << "Pediatra: " << pediatra2 << endl;
                    cout << "Ortopeda: " << ortopeda2 << endl;
                    cout << "Wybierz lekarza do którego chcesz się dostać wpisując 1 lub 2:" << endl;
                    cin >> choose;

                    if(choose == 1) {

                        while(true){
                            cout << "Lekarz przyjmuje w godzinach 13-15 w pokoju nr 110" << endl;
                            cout << "Na ulicy: " << ulica2 << endl;
                            cout << "Podaj godzinę na którą chcesz się zapisać" << endl;
                            cin >> godzina;

                            if(godzina >= 13.0 || godzina <= 15.0) {



                                plik.open("db/pediatra1.txt",ios::out | ios::app |ios::in);
                                if(plik.good() == false) {

                                    cout << "Wizyta jest już zarezerwowana" << endl;
                                } else {

                                    cout << "Zostałeś zapisany do pediatry, Pani " << pediatra2 << endl;
                                    plik << "Imie pacjenta: " << imie << endl;
                                    plik << "ID wizyty: " << getRandomId() << endl;
                                    plik << "Lekarz, Pani: " << pediatra2 << endl;
                                    plik << "Dzien " << dni << endl;
                                    plik << "Miesiac " << miesiace << endl;
                                    plik << "Rok " << pobierzdata << endl;
                                    plik << "Godzina " << godzina << endl;
                                    plik << " " << endl;
                                    plik.close();
                                }

                            } else {
                                cout<<"Podaj prawidłową godzine"<<endl;
                                break;
                            }
                            break;
                        }

                    } else if(choose == 2) {
                        while(true){
                            cout << "Lekarz przyjmuje w godzinach 14-19 w pokoju nr 125" << endl;
                            cout << "na ulicy: " << ulica1 << endl;
                            cout << "Podaj godzinę na którą chcesz się zapisać" << endl;
                            cin >> godzina;

                            if(godzina >= 14.00 || godzina <= 19.00) {


                                plik.open("db/pediatra1.txt",ios::out | ios::app |ios::in);

                                if(plik.good() == false) {
                                    cout << "Wizyta jest już zarezerwowana" << endl;
                                } else {

                                    cout << "Zostałeś zapisany do ortopedy, Pana " << ortopeda2 << endl;
                                    plik << "Imie pacjenta: " << imie << endl;
                                    plik << "Nazwisko pacjenta: " << nazwisko << endl;
                                    plik << "Lekarz, Pan: " << ortopeda2 << endl;
                                    plik << "ID wizyty: " << getRandomId() << endl;
                                    plik << "Dzien " << dni << endl;
                                    plik << "Miesiac " << miesiace << endl;
                                    plik << "Rok " << pobierzdata << endl;
                                    plik << "Godzina " << godzina << endl;
                                    plik << " " << endl;
                                    plik.close();
                                }

                            } else {
                                cout << "Wpisz prawidlowa godzine" << endl;
                                break;
                            }
                            break;
                        }


                    } else {
                        cout << "Wybierz liczbę od 1 do 2!";
                    }

                } else {
                    cout << "Dziś niema lekarza";
                }
                break;
            }

            break;
        }

    }

    return 0;
}
