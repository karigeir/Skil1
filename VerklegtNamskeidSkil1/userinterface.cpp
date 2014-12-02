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



    ifstream menu ("ascii.txt");
    cout << menu.rdbuf();
    cout << endl;

    int operation;
    string searchString;

    Person a = Person();
    do{
        cout << endl;
        cout << "Choose 1 to add a known computer scientist." << endl;
        cout << "Choose 2 to display what you have added. " << endl;
        cout << "Choose 3 to search." << endl;
        cout << "Choose 4 to sort results. " << endl;
        cout << "Choose 5 to quit. " << endl;
        cout << ":";
        cin >> operation;

        switch(operation){
            case 1:
                cout << endl;
                cout << "Add a firstname, surname, gender, birthyear and a year of death" << endl;

                cin >> a.fornafn >> a.eftirnafn >> a.kyn >> a.faedingarar >> a.danarar;
                cout << "Firstname is: " << a.fornafn << endl;
                cout << "Surname is: " << a.eftirnafn << endl;
                cout << "Gender is: " << a.kyn << endl;
                cout << "Birthyear is: " << a.faedingarar << endl;
                cout << "Year of death is: " << a.danarar << endl;
                compSciPersonService.add(a);
                break;
            case 2:
                cout << endl;
                compSciPersonService.display();
                break;
            case 3:
                cout << "Type search string: ";
                cin >> searchString;
                compSciPersonService.searchFunction(searchString);
                break;
            case 4:
                compSciPersonService.howToSort();
                break;
            case 5:
                cout << "Quitting" << endl;
                break;
            default:
                cout << "Invalid command, try again." << endl;
        }

   }while((operation != 5));
}
