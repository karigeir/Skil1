#ifndef COMPSCIPERSONSERVICE_H
#define COMPSCIPERSONSERVICE_H

#include "person.h"
#include "personrepository.h"

class CompSciPersonService
{
public:
    CompSciPersonService();
    void add(Person a);
    void remove();
    void display();
private:
    PersonRepository personRepo;
};

#endif // COMPSCIPERSONSERVICE_H
