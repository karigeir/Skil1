#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

bool compare_firstname(const Person& first, const Person& second)
{
    return first.fornafn < second.fornafn;
}

bool compare_surname(const Person& first, const Person& second)
{
    return first.eftirnafn < second.eftirnafn;
}

bool compare_gender(const Person& first, const Person& second)
{
    return first.kyn < second.kyn;
}

bool compare_birthyear(const Person& first, const Person& second)
{
    return first.faedingarar < second.faedingarar;
}

bool compare_deathyear(const Person& first, const Person& second)
{
    return first.danarar < second.danarar;
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
    addtolist();
}


list<Person> personuListi = list<Person>();

void PersonRepository::addtolist()
{
    ifstream inFile ("example.txt");
    string word1, word2, word3, word4, word5;


    while (inFile >> word1 >> word2 >> word3 >> word4 >> word5 )
    {
        Person a = Person();
        a.fornafn = word1;
        a.eftirnafn = word2;
        a.kyn = word3;
        a.faedingarar = word4;
        a.danarar = word5;

        personuListi.push_back(Person(a));
    }
    display();
}

void PersonRepository::display()
{
//    ifstream inFile ("example.txt");
//    string word1, word2, word3, word4, word5;


//    while (inFile >> word1 >> word2 >> word3 >> word4 >> word5 )
//    {
//        Person a = Person();
//        a.fornafn = word1;
//        a.eftirnafn = word2;
//        a.kyn = word3;
//        a.faedingarar = word4;
//        a.danarar = word5;

//        personuListi.push_back(Person(a));
//    }

     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
}

void PersonRepository::displayByFirstname()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         personuListi.sort(compare_firstname);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
}

void PersonRepository::displayBySurname()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         personuListi.sort(compare_surname);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
}

void PersonRepository::displayByGender()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         personuListi.sort(compare_gender);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
}

void PersonRepository::displayByBirthYear()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         personuListi.sort(compare_birthyear);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
}


void PersonRepository::displayByDeathYear()
{
     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         personuListi.sort(compare_deathyear);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }
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
