#include "userinterface.h"
#include <string>
#include <iostream>

using namespace std;

UserInterface::UserInterface()
{
    CompSciPersonService compSciPersonService;
}

void UserInterface::start(Person a) {
    cout << "Velkomin/n!" << endl;
    cout << "Addadu nafni, kyni, faedingarari, danarari" << endl;
    cin >> a.nafn >> a.kyn >> a.faedingarar >> a.danarar;
    cout << "Nafnid er: " << a.nafn << endl;
    cout << "Kynid er: " << a.kyn << endl;
    cout << "Faedingararid er: " << a.faedingarar << endl;
    cout << "Danarar er: " << a.danarar << endl;
    }
