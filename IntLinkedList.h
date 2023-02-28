#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

class IntLinkedList {
    private:
        int count;
        Node *first;
        Node *last;

        
    public:
        void initializeList() {
            destroyList();
        }

        void insertFirst(int newValue) {
            Node *newNode = new Node;   //create pointer to a new node
            newNode->data = newValue;
            newNode->next = first;

            count++;

            if(last == NULL) {
                last = newNode; //point last to newNode if the list is empty
            }
        }

        void insertLast(int newValue) {
            Node *newNode = new Node;

            newNode->data = newValue;
            newNode->next = NULL;

            if(first == NULL) { //If list is empty, make first and last node newNode
                first = newNode;
                last = newNode;
                count++;
            }
            else
            {
                last->next = newNode;
                last = newNode;
                count++;
            }
        }

        void deleteNode(int deleteValue) {
            Node *current;
            Node *trailCurrent;
            bool found;

            if(first == NULL) {
                cout << "Cannot delete from an empty list." << endl;
            }
            else {
                if(first->data == deleteValue) {
                    current = first;
                    first = first->next;
                    count--;
                    if(first == NULL)   //If the only item in the list
                    {
                        last == NULL;
                        delete current;
                    }
                }
                else{
                    found = false;
                    trailCurrent = first;
                    current = first->next;

                    while(current !=NULL && !found) {
                        if(current->data != deleteValue) {
                            trailCurrent = current;
                            current = current->next;
                        }
                        else {
                            found = true;
                        }
                    }

                    if(found) {
                        trailCurrent->next = current->next;
                        count--;

                        if(last == current) {   //if node deleted was the last node
                            last = trailCurrent;
                            delete current;
                        }
                    }
                    else {
                        cout << "There is no item on this list with the value " << deleteValue << endl;
                    }
                }
            }
        }

        void destroyList() {
            Node *temp;

            while(first != NULL)
            {
                temp = first;
                first = first->next;
                delete temp;
            }
            last = NULL;
            count = 0;
        }

        IntLinkedList() {
            first = NULL;
            last = NULL;
            count = 0;
        }

        ~IntLinkedList() {
            destroyList();
        }

        Node* getFirst() {
            return first;
        }

        void printList() {
            
            Node *current;
            current = first;

            if(first == NULL) {
                cout << "No items in list." << endl;
            }
            while(current != NULL) {
                cout << "\t";
                current->data;
                current = current->next;
            }
        }
};