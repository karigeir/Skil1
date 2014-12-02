#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

bool compare_firstname(const Person& first, const Person& second)
{
    return first.fornafn > second.fornafn;
}

bool compare_surname(const Person& first, const Person& second)
{
    return first.eftirnafn > second.eftirnafn;
}

bool compare_gender(const Person& first, const Person& second)
{
    return first.kyn > second.kyn;
}

bool compare_birthyear(const Person& first, const Person& second)
{
    return first.faedingarar > second.faedingarar;
}

bool compare_deathyear(const Person& first, const Person& second)
{
    return first.danarar > second.danarar;
}


PersonRepository::PersonRepository()
{
    personVector = vector<Person>();
}

void PersonRepository::add(Person a)
{
    ofstream outFile;
    outFile.open("example.txt", std::ofstream::app);
    outFile << a.fornafn << " ";
    outFile << a.eftirnafn << " ";
    outFile << a.kyn << " ";
    outFile << a.faedingarar << " ";
    outFile << a.danarar << "\n";
    outFile.close();
    addtolist(a);
}


list<Person> personuListi = list<Person>();

void PersonRepository::addtolist(Person a)
{
    ifstream inFile ("example.txt");
    string word1, word2, word3, word4, word5;


    while (inFile >> word1 >> word2 >> word3 >> word4 >> word5 )
    {
        //Person b = Person();
        a.fornafn = word1;
        a.eftirnafn = word2;
        a.kyn = word3;
        a.faedingarar = word4;
        a.danarar = word5;

        personuListi.push_back(Person(a));
    }
}

void PersonRepository::display()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         //personuListi.sort(compare_name);
         //personuListi.sort(compare_gender);
         //personuListi.sort(compare_birthyear);
         //personuListi.sort(compare_birthyear);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }

     //inFile.close();
}

void PersonRepository::searchFunction(string search)
{
    for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
    {
        if(search==iter->fornafn)
        {
            cout << iter->fornafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
        }
    }
}
