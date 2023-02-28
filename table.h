#include <iostream>
#include <vector>
using namespace std;
class Table {
    public:
        Table() {
            numberOfSlots = 0;
            tableDisplay = "";
        }

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
    protected:
        int numberOfSlots;
        string tableDisplay;
        vector<int> list;
};