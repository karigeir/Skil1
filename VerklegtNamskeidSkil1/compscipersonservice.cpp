#include "compscipersonservice.h"
#include "person.h"
#include <string>
#include <iostream>

using namespace std;

CompSciPersonService::CompSciPersonService()
{
    personRepo = PersonRepository();
}

void CompSciPersonService::add(Person a)
{
    personRepo.add(a);
}

void CompSciPersonService::remove()
{
}

void CompSciPersonService::display()
{
    personRepo.display();
}
