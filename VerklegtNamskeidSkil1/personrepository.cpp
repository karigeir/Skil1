#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

PersonRepository::PersonRepository()
{
    personVector = vector<Person>();
}

void PersonRepository::add(Person a)
{


//    if(inFile.is_open()) {
//            // read in
//            string line;
//            while(getline(inFile,line)) {
//                //TODO: Process line
//            }

//    //        string word1, word2, word3;
//    //        //inFile  word1 << word2 << word3;

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
         cout << iter->nafn << " " << iter->kyn << " " << iter->faedingarar <<  " " << iter->danarar << endl;
     }

     inFile.close();
}

