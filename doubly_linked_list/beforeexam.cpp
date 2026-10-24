#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string name;
    int id;
    int age;
    Node *next;
    Node *prev;

    Node(string Sname, int sid, int Sage)
    {
        name = Sname;
        id = sid;
        age = Sage;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:

    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    void traversefromhead()
    {
        if (head == nullptr)
        {
            cout << "THERES NOTHING TO TRAVERSE. NO STUDENT YET.\n";
            return;
        }

        int i = 1;
        Node *current = head;

        while (current != nullptr)
        {
            cout << "\nSTUDENT " << i << endl;
            cout << "Name: " << current->name << endl;
            cout << "ID: " << current->id << endl;
            cout << "Age: " << current->age << endl;

            current = current->next;
            i++;
        }
    }

    void traversefromtail()
    {
        if (tail == nullptr)
        {
            cout << "THERES NOTHING TO TRAVERSE. NO STUDENT YET.\n";
            return;
        }

        int i = 1;
        Node *current = tail;

        while (current != nullptr)
        {
            cout << "\nSTUDENT " << i << endl;
            cout << "Name: " << current->name << endl;
            cout << "ID: " << current->id << endl;
            cout << "Age: " << current->age << endl;

            current = current->prev;
            i++;
        }
    }

    void InsertBegin(string Sname, int sid, int Sage)
    {
        Node *newNode = new Node(Sname, sid, Sage);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void InsertEnd(string Sname, int sid, int Sage)
    {
        Node *newNode = new Node(Sname, sid, Sage);

        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void InsertatPosition(string Sname, int sid, int Sage, int pos)
    {
        if (pos < 1)
        {
            cout << "INVALID POSITION.\n";
            return;
        }

        if (pos == 1)
        {
            InsertBegin(Sname, sid, Sage);
            return;
        }

        if (head == nullptr)
        {
            cout << "LIST IS EMPTY. USE POSITION 1.\n";
            return;
        }

        Node *current = head;

        for (int i = 1; i < pos - 1 && current != nullptr; i++)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "POSITION DOES NOT EXIST.\n";
            return;
        }

        Node *newNode = new Node(Sname, sid, Sage);

        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != nullptr)
        {
            current->next->prev = newNode;
        }
        else
        {
            tail = newNode;
        }

        current->next = newNode;
    }

    void DeleteBegin()
    {
        if (head == nullptr)
        {
            cout << "THERES NOTHING TO DELETE.\n";
            return;
        }

        Node *temp = head;

        head = head->next;

        if (head != nullptr)
        {
            head->prev = nullptr;
        }
        else
        {
            tail = nullptr;
        }

        delete temp;
    }

    void DeleteEnd()
    {
        if (tail == nullptr)
        {
            cout << "THERES NOTHING TO DELETE.\n";
            return;
        }

        Node *temp = tail;

        tail = tail->prev;

        if (tail != nullptr)
        {
            tail->next = nullptr;
        }
        else
        {
            head = nullptr;
        }

        delete temp;
    }

    void DeleteatPosition(int pos)
    {
        if (head == nullptr)
        {
            cout << "THERES NOTHING TO DELETE.\n";
            return;
        }

        if (pos < 1)
        {
            cout << "POSITION OUT OF RANGE.\n";
            return;
        }

        Node *current = head;

        for (int i = 1; i < pos && current != nullptr; i++)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "POSITION OUT OF RANGE.\n";
            return;
        }

        // Fix the left side
        if (current != head)
        {
            current->prev->next = current->next;
        }
        else
        {
            head = head->next;
        }

        // Fix the right side
        if (current != tail)
        {
            current->next->prev = current->prev;
        }
        else
        {
            tail = tail->prev;
        }

        delete current;
    }
};


int main()
{
    DoublyLinkedList list;

    int choice;

    do
    {
        cout << "\n==============================\n";
        cout << "   DOUBLY LINKED LIST MENU\n";
        cout << "==============================\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Delete at Beginning\n";
        cout << "5. Delete at End\n";
        cout << "6. Delete at Position\n";
        cout << "7. Display from Head\n";
        cout << "8. Display from Tail\n";
        cout << "9. Exit\n";
        cout << "==============================\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            int id;
            int age;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter age: ";
            cin >> age;

            list.InsertBegin(name, id, age);
            cout << "Student inserted at beginning.\n";
            break;
        }

        case 2:
        {
            string name;
            int id;
            int age;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter age: ";
            cin >> age;

            list.InsertEnd(name, id, age);
            cout << "Student inserted at end.\n";
            break;
        }

        case 3:
        {
            string name;
            int id;
            int age;
            int pos;

            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter name: ";
            cin >> name;

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter age: ";
            cin >> age;

            list.InsertatPosition(name, id, age, pos);
            break;
        }

        case 4:
            list.DeleteBegin();
            break;

        case 5:
            list.DeleteEnd();
            break;

        case 6:
        {
            int pos;

            cout << "Enter position to delete: ";
            cin >> pos;

            list.DeleteatPosition(pos);
            break;
        }

        case 7:
            cout << "\n===== FORWARD =====\n";
            list.traversefromhead();
            break;

        case 8:
            cout << "\n===== BACKWARD =====\n";
            list.traversefromtail();
            break;

        case 9:
            cout << "PROGRAM EXIT.\n";
            break;

        default:
            cout << "INVALID CHOICE.\n";
        }

    } while (choice != 9);

    return 0;
}