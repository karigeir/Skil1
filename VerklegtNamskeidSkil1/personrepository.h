#ifndef PERSONREPOSITORY_H
#define PERSONREPOSITORY_H

#include <list>
#include "person.h"
#include <fstream>

class PersonRepository
{
public:
    PersonRepository();
    void add(Person b);
};

#endif // PERSONREPOSITORY_H
