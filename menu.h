//This file will include the displaying and mechanics of the menu
#include <iostream>
using namespace std;
class Menu {
    public:
        void printMenu(){
            cout << "Mips Assembly Simulator" << endl;
            cout << "1. Write Code" << endl;
            cout << "2. Run Simulation" << endl;
            cout << "3. Edit Registry" << endl;
            cout << "4. Edit Memory Slots" << endl;
            cout << "5. Manual" << endl;
            cout << "6. Exit" << endl;
            acceptInput();
            selectOption(option);
        }
        
        void acceptInput(){
            cin >> option;
        }

        void selectOption(int option){
            switch(option){
                case 1:
                    //write code
                    cout << "YOU SELECTED: Write Code" << endl;
                    break;
                case 2:
                    //run simulation
                    cout << "YOU SELECTED: Run Simulation" << endl;
                    break;
                case 3:
                    //edit registry
                    cout << "YOU SELECTED: Edit Registry" << endl;
                    break;
                case 4:
                    //edit memory slots
                    cout << "YOU SELECTED: Edit Memory Slots" << endl;
                    break;
                case 5:
                    //manual
                    cout << "YOU SELECTED: Manual" << endl;
                    break;
                case 6:
                    //quit
                    cout << "YOU SELECTED: Quit" << endl;
                    exit(0);
                default:
                    cout << "***Invalid Input***" << endl;
                    printMenu();
            }
        }
    private:
        int option;
};