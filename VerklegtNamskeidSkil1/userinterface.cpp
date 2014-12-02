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

    Person a = Person();
    do{
        cout << "Choose 1 to add a known computer scientist." << endl;
        cout << "Choose 2 to display what you have added. " << endl;
        cout << "Choose 3 to search." << endl;
        cout << "Choose 4 to quit. " << endl;
        cout << ":";
        cin >> operation;

        switch(operation){
            case 1:
                cout << "Add a name, gender, birthyear and a year of death" << endl;
                cin >> a.nafn >> a.kyn >> a.faedingarar >> a.danarar;
                cout << "Name is: " << a.nafn << endl;
                cout << "Gender is: " << a.kyn << endl;
                cout << "Birthyear is: " << a.faedingarar << endl;
                cout << "Year of death is: " << a.danarar << endl;
                compSciPersonService.add(a);
                break;
            case 2:
                compSciPersonService.display();
                break;
            case 3:
                cout << "Her kemur search function" << endl;
            case 4:
                cout << "Quitting" << endl;
                break;
            default:
                cout << "Invalid command, try again." << endl;
        }

   }while((operation != 4));
}
