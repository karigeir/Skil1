#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>
#include "compscipersonservice.h"

class UserInterface
{
public:
    UserInterface();
    void start();
private:
    CompSciPersonService compSciPersonService;
};

#endif // USERINTERFACE_H
