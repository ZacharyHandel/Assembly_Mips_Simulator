#include "table.h"

class Registry : public Table {
    private:

    public:
    void add(int value) {
        list.push_back(value);
    }
};