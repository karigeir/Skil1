#include <QCoreApplication>
#include <iostream>
#include "userinterface.h"
#include "person.h"
#include "compscipersonservice.h"

using namespace std;

int main()
{
    UserInterface ui = UserInterface();
    ui.start();

    //CompSciPersonService person = CompSciPersonService();

    return 0;
}
