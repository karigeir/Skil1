#include "compscipersonservice.h"
#include "person.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

CompSciPersonService::CompSciPersonService()
{
    personRepo = PersonRepository();
}

void CompSciPersonService::add(Person a)
{
    personRepo.add(a);
}

void CompSciPersonService::addtolist(Person a)
{
    personRepo.addtolist();
}

void CompSciPersonService::remove()
{
}

void CompSciPersonService::display()
{
    personRepo.addtolist();
}

void CompSciPersonService::searchFunction(string search)
{
    ifstream inFile;
    string line;

    inFile.open("example.txt");

    if(!inFile){
    cout << "Unable to open file" << endl;
    exit(1);
    }
    size_t pos;
    bool found_string = false;

      while(getline(inFile,line))
      { // get line from file
          pos=line.find(search); // search
          if(pos!=string::npos)
                {
                    cout <<"Search string found!" << endl;
                    cout << "Displaying search results: " << endl;
                    found_string = true;
                    personRepo.searchFunction(search);
                    break;
                }
      }

      if(found_string == false)
      {
            cout << "Search string not found!" << endl;
      }
}

void CompSciPersonService::howToSort()
{
    int input;

    cout << endl;
    cout << "Choose 1 to sort by firstname: " << endl;
    cout << "Choose 2 to sort by lastname: " << endl;
    cout << "Choose 3 to sort by gender: " << endl;
    cout << "Choose 4 to sort by year born: " << endl;
    cout << "Choose 5 to sort by year died: " << endl;
    cout << "Choose 6 to quit: " << endl;
    cout << ":";
    cin >> input;

    switch(input){

    case 1:
        cout << "By firstname:" << endl;
        personRepo.displayByFirstname();
        break;
    case 2:
        cout << "By lastname:" << endl;
        personRepo.displayBySurname();
        break;
    case 3:
        cout << "By gender:" << endl;
        personRepo.displayByGender();
        break;
    case 4:
        cout << "By year born:" << endl;
        personRepo.displayByBirthYear();
        break;
    case 5:
        cout << "By year died:" << endl;
        personRepo.displayByDeathYear();
        break;
    case 6:
        break;
     default:
        cout << "wrong input" << endl;
    }
}
