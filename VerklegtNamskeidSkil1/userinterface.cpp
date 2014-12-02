#include "userinterface.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

UserInterface::UserInterface()
{
    compSciPersonService = CompSciPersonService();
}

void UserInterface::start() {
<<<<<<< HEAD
    string skipun;

    cout << "Velkomin/n!" << endl;
    cout << "Eftirfarandi skipanir er haegt ad nota: add (til ad baeta vid personu), display (til ad syna hvada personum hefur verid baett vid). Veldu skipun. " << endl;
    cin >> skipun;

    while ((skipun == "Add")||(skipun == "add"))
    {
        Person a = Person();
        cout << "Addadu nafni, kyni, faedingarari, danarari" << endl;
        cin >> a.nafn >> a.kyn >> a.faedingarar >> a.danarar;
        cout << "Nafnid er: " << a.nafn << endl;
        cout << "Kynid er: " << a.kyn << endl;
        cout << "Faedingararid er: " << a.faedingarar << endl;
        cout << "Danarar er: " << a.danarar << endl;
        compSciPersonService.add(a);
        cout << endl << "Veldu naestu skipun.";
        cin >> skipun;
    }
    while ((skipun == "Display")||(skipun == "display"))
    {
       compSciPersonService.display();
       cout << endl << "Veldu naestu skipun.";
       cin >> skipun;
    }

    cout << "Tetta er ekki logleg skipun. Veldu aftur." << endl;

}

=======
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
>>>>>>> e2bdd80e66db697e8906a79cd56721efccae4e85
