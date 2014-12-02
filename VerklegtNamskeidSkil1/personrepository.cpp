#include "personrepository.h"
#include "person.h"
#include <fstream>
#include <iostream>

using namespace std;

PersonRepository::PersonRepository()
{
    personVector = vector<Person>();
}

void PersonRepository::add(Person b)
{

    //Reading from a whitespace delimited file
//    ifstream inFile ("inFile.txt");
//    if(inFile.is_open()) {
//            // read in
//            string line;
//            while(getline(inFile,line)) {
//                //TODO: Process line
//            }

//    //        string word1, word2, word3;
//    //        //inFile  word1 << word2 << word3;



//            inFile.close();
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
     string line;
     string word1, word2, word3, word4;
     while (inFile >> word1 >> word2 >> word3 >> word4 )
     {
         cout << word1 << " " << word2 << " " << word3 << " " << word4 << endl;
     }
}

