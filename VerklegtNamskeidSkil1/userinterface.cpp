#include "userinterface.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

UserInterface::UserInterface()
{
    CompSciPersonService compSciPersonService;
}

void UserInterface::start() {
    Person b = Person();

    cout << "Her muntu skra tekkta personu ur sogu tolvunarfraedinnar." << endl;
    cout << endl;

       cout << "Fornafn: ";
       cin >> b.fornafn;
       cout << "Eftirnafn: ";
       cin >> b.eftirnafn;
       cout << "Kyn: ";
       cin >> b.kyn;
       cout << "Faedingarar: ";
       cin >> b.faedingarar;
       cout << "Danarar: ";
       cin >> b.danarar;
       string lengja = b.fornafn + " " + b.eftirnafn + " " + b.kyn+ " " + b.faedingarar + " " + b.danarar;
       cout << lengja << endl;
       }
