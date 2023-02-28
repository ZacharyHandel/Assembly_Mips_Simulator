#include <iostream>
#include "menu.h"
#include "table.h"
#include "IntLinkedList.h"
using namespace std;

int main()
{
    Menu mainMenu;
    Table table;
    IntLinkedList list;
    //mainMenu.printMenu();

    table.createTable(10);
    string table1 = table.getTableDisplay();

    cout << table1;
    cout << endl;

    list.initializeList();
    list.insertFirst(1);
    list.printList();

    

}