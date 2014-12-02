#include <QCoreApplication>
#include <iostream>
#include "userinterface.h"
#include "person.h"
#include "compscipersonservice.h"
#include <list>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{


    UserInterface ui = UserInterface();
<<<<<<< HEAD
    ui.start();
=======
>>>>>>> e2bdd80e66db697e8906a79cd56721efccae4e85

    ui.start();

    ofstream outStream;
    outStream.open("persona.txt");
    list<Person>people = list<Person>();


   // ifstream inStream;


    //inStream.open("personur.txt");

<<<<<<< HEAD
=======

      outStream.close();




      /*if(inStream.is_open()) {
       while(!inStream.eof()) {
            Person a = Person();
            inStream >> a.fornafn >> a.eftirnafn >> a.kyn >> a.faedingarar >> a.danarar;
            people.push_back(a);
       }
    }*/


                                    //CompSciPersonService person = CompSciPersonService();
>>>>>>> e2bdd80e66db697e8906a79cd56721efccae4e85
    return 0;
}


