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

   // table.createTable(10);
    //string table1 = table.getTableDisplay();

    //cout << table1;
    //cout << endl;

    
    list.insertFirst(1);
    list.insertFirst(2);
    list.insertFirst(3);
    list.insertFirst(4);
    list.insertFirst(5);
    list.insertFirst(6);
    list.insertFirst(7);
    list.insertLast(19);
    list.insertLast(20);
    list.printList();

    list.deleteNode(19);
    list.deleteNode(20);
    list.deleteNode(3);
    list.deleteNode(300);
    list.printList();


    

}