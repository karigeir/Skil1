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

    ui.start();

    ofstream outStream;
    outStream.open("persona.txt");
    list<Person>people = list<Person>();


   // ifstream inStream;


    //inStream.open("personur.txt");


      outStream.close();




      /*if(inStream.is_open()) {
       while(!inStream.eof()) {
            Person a = Person();
            inStream >> a.fornafn >> a.eftirnafn >> a.kyn >> a.faedingarar >> a.danarar;
            people.push_back(a);
       }
    }*/


                                    //CompSciPersonService person = CompSciPersonService();
    return 0;
}


