#include "compscipersonservice.h"
#include <string>
#include <iostream>

using namespace std;

CompSciPersonService::CompSciPersonService()
{
}

void CompSciPersonService::add()
{
    char UserInput;


    string nafn;
    string kyn;
    int faedingarar;
    int danarar;
    do{
    cout << "Addadu nafni, kyni, faedingarari, danarari" << endl;
    cin >> nafn >> kyn >> faedingarar >> danarar;
    cout << "Nafnid er: " << nafn << endl;
    cout << "Kynid er: " << kyn << endl;
    cout << "Faedingararid er: " << faedingarar << endl;
    cout << "Danarar er: " << danarar << endl;
    cout << "Add another person? y/n" << endl;
    }while (UserInput == 'y' || UserInput == 'Y');
}

