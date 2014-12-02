#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

bool compare_name(const Person& first, const Person& second)
{
    return first.nafn > second.nafn;
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
    outFile << a.nafn << " ";
    outFile << a.kyn << " ";
    outFile << a.faedingarar << " ";
    outFile << a.danarar << "\n";
    outFile.close();
}
void PersonRepository::display()
{
     ifstream inFile ("example.txt");
     string word1, word2, word3, word4;
     list<Person> personuListi = list<Person>();

     while (inFile >> word1 >> word2 >> word3 >> word4 )
     {
         Person b = Person();
         b.nafn = word1;
         b.kyn = word2;
         b.faedingarar = word3;
         b.danarar = word4;
         personuListi.push_back(Person(b));
     }

     for(list<Person>::iterator iter = personuListi.begin(); iter != personuListi.end(); iter++)
     {
         //personuListi.sort(compare_name);
         //personuListi.sort(compare_gender);
         //personuListi.sort(compare_birthyear);
         //personuListi.sort(compare_birthyear);
         cout << iter->nafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }

     inFile.close();
}

void PersonRepository::searchFunction(string search)
{

}
