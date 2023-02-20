#include <iostream>
#include "menu.h"
#include "table.h"
using namespace std;

int main()
{
    Menu mainMenu;
    Table table;
    //mainMenu.printMenu();

    table.createTable(10);
    string table1 = table.getTableDisplay();

    cout << table1;
}