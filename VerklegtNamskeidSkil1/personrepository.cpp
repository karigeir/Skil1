#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

bool compare_firstname(const Person& first, const Person& second)
{
    return first.fornafn > second.fornafn;
}

bool compare_secondname(const Person& first, const Person& second)
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
}
void PersonRepository::display()
{
     ifstream inFile ("example.txt");
     string word1, word2, word3, word4, word5;
     list<Person> personuListi = list<Person>();

     while (inFile >> word1 >> word2 >> word3 >> word4 >> word5 )
     {
         Person b = Person();
         b.fornafn = word1;
         b.eftirnafn = word2;
         b.kyn = word3;
         b.faedingarar = word4;
         b.danarar = word5;
         personuListi.push_back(Person(b));
     }

     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         //personuListi.sort(compare_name);
         //personuListi.sort(compare_gender);
         //personuListi.sort(compare_birthyear);
         //personuListi.sort(compare_birthyear);
         cout << iter->fornafn << " " << iter->eftirnafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }

     inFile.close();
}

void PersonRepository::searchFunction(string search)
{

}
