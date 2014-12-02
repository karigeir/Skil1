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

void CompSciPersonService::remove()
{
}

void CompSciPersonService::display()
{
    personRepo.display();
}

void CompSciPersonService::searchFunction(string search)
{
    ifstream inFile;
    string line;

    inFile.open("example.txt");

    if(!inFile)
    {
    cout << "Unable to open file" << endl;
    exit(1);
    }

    size_t pos;
    while(inFile.good())
    {
       getline(inFile,line); // get line from file
          pos=line.find(search); // search
          if(pos!=string::npos)
                {
                    cout <<"Search string found!" << endl;
                    cout << "Displaying search results: " << endl;
                    personRepo.searchFunction(search);
                    break;
                }
          else
          {
              cout << "Search string not found." << endl;
            break;
          }
    }
}

