#ifndef PERSONREPOSITORY_H
#define PERSONREPOSITORY_H

#include <list>
#include "person.h"

class PersonRepository
{
private:
    vector<Person> personVector;
public:
    PersonRepository();
    void add(Person a);
    void display();
    void searchFunction(string search);
};

#endif // PERSONREPOSITORY_H
