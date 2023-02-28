#include "table.h"

class Registry : public Table {
    private:

    public:
        void addRegister(int value) {
        list.push_back(value);
        }

        void printList() {
            for(int i = 0; i < list.size(); i++) {
                cout << list[i] << endl;
            }
        }
    
};