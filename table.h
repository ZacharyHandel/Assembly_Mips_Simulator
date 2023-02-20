#include <iostream>
using namespace std;
class Table {
    public:
        void createTable(int num_slots){
            for(int i = 0; i < num_slots; i++){
                tableDisplay = tableDisplay + "\n+----+\n|    |";
            }
            tableDisplay = tableDisplay + "\n+----+";
        }

        void printTable() {
            cout << tableDisplay << endl;
        }

        string getTableDisplay()
        {
            return tableDisplay;
        }
        
        void setTableDisplay(string td)
        {
            tableDisplay = td;
        }
    private:
        int numberOfSlots;
        string tableDisplay;
};