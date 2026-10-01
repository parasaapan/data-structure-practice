#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
 };

class DoublyLinkedList {
    private:
    Node* head;
    Node* tail;

    public:
    DoublyLinkedList () {
        head = nullptr;
        tail = nullptr;
    }

    void InsertAtbegine(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }


    void InsertAtEnd(int val) {
        Node* newNode = new Node(val);
        if(tail == nullptr) {
            tail = newNode;
            head = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }


    void InsertAtPosition(int val, int pos) {


        if(pos == 1) {
            InsertAtbegine(val);
            return;
        }

        Node* current = head;

        for(int i = 1; i < pos - 1 && current != nullptr ; i++) {
            current = current->next;
        }

        if(current == nullptr) {
            InsertAtEnd(val);
            return;
        }

        Node* newNode = new Node(val);

        newNode->next = current->next;
        newNode->prev = current;

        if(current->next != nullptr) {
            current->next->prev = newNode;
        }  else {
            tail = newNode;
        }

        current->next = newNode; 
    }


    void deleteatbegin() {
        if(head == nullptr) {
            cout << "THERESE NOTHING TO DELETEW";
            return;
        }

        Node* temp = head;

        head = head->next;

        if(head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }

        delete temp;

    }

    void deleteatEnd() {
        if(tail == nullptr) {
            cout << "THERES NOTHING TO DELETE NIG";
            return;
        }

        Node* temp = tail;

        tail = tail->prev;

        if(tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }

        delete temp;
    }


    void deleteAtposition(int pos) {
        if(head == nullptr) {
            return;
        }

        Node* current = head;

        for(int i = 1 ; i < pos  && current != nullptr; i++) {
            current = current->next;
        }   


        if(current == nullptr) {
            cout << "INVALID POSITION";
            return;
        }


        if(current->prev) {
            current->prev->next = current->next;
        } else {
            head = head->next;
        }

        if(current->next) {
            current->next->prev = current->prev;
        } else {
            tail = tail->prev;
        }

        delete current;
    }


    void traverse () {
        Node* current = head;

        while(current != nullptr) {
            cout << current->data << "-> ";

            current = current->next;
        }

        cout << "NUll";


    }


    void traverseback() {
        Node* current = tail;

        while(current != nullptr) {
            cout << current->data << "<-";
            current = current->prev; 
        }

        cout << "NULL";
    }

};

int main() {

    DoublyLinkedList list;

    list.InsertAtEnd(10);
    list.InsertAtEnd(20);
    list.InsertAtEnd(30);
    list.InsertAtEnd(40);

    list.deleteAtposition(2);

    list.traverse();




    return 0 ;
}