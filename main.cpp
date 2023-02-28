#include <iostream>
#include "menu.h"
#include "Registry.h"
using namespace std;

int main()
{
    Menu mainMenu;
    Table table;
    Registry r1;
    r1.addRegister(10);
    r1.addRegister(9);
    r1.addRegister(8);
    r1.addRegister(9);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);
    r1.addRegister(10);

    r1.printList(); 

}