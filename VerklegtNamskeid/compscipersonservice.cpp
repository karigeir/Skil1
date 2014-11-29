#include "compscipersonservice.h"
#include <string>
#include <iostream>

using namespace std;

CompSciPersonService::CompSciPersonService()
{
}

void CompSciPersonService::add()
{
    string nafn;
    string kyn;
    int faedingarar;
    int danarar;
    cout << "Addadu nafni, kyni, faedingarari, danarari" << endl;
    cin >> nafn >> kyn >> faedingarar >> danarar;
    cout << "Nafnid er: " << nafn << endl;
    cout << "Kynid er: " << kyn << endl;
    cout << "Faedingararid er: " << faedingarar << endl;
    cout << "Danarar er: " << danarar << endl;
}
