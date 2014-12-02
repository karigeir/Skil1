#ifndef COMPSCIPERSONSERVICE_H
#define COMPSCIPERSONSERVICE_H

#include "person.h"
#include "personrepository.h"

class CompSciPersonService
{
public:
    CompSciPersonService();
    void add(Person b);
    void remove();
    void display();
private:
    PersonRepository personRepo;
};

#endif // COMPSCIPERSONSERVICE_H
