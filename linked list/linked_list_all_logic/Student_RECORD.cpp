#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int id;
    string name;
    double grade;
    Node *next;
};

void menu(int &choice)
{
    cout << "1. Add Student at the beginning" << endl;
    cout << "2. Add Student at the end" << endl;
    cout << "3. Add Student at a specific position" << endl;
    cout << "4. Delete Student from the beginning" << endl;
    cout << "5. Delete Student from the end" << endl;
    cout << "6. Delete Student from a specific position" << endl;
    cout << "7. Search Student by ID" << endl;
    cout << "8. Update Student by ID" << endl;
    cout << "9. Display all Students" << endl;
    cout << "10. Exit" << endl;
    cin >> choice;
    cin.ignore(); // Clear the input buffer
}

void Add_Student_Beginning(Node *&head)
{
    string name;
    int id;
    double grade;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore(); // Clear the input buffer

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student Grade: ";
    cin >> grade;

    cin.ignore(); // Clear the input buffer

    Node *newNode = new Node;
    newNode->id = id;
    newNode->name = name;
    newNode->grade = grade;

    newNode->next = head;
    head = newNode;
}

void Add_Student_End(Node *&head)
{

    string name;
    int id;
    double grade;

    cout << "Enter Student ID: ";
    cin >> id;

    cin.ignore(); // Clear the input buffer

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Student Grade: ";
    cin >> grade;

    cin.ignore(); // Clear the input buffer

    Node *newNode = new Node;
    newNode->id = id;
    newNode->name = name;
    newNode->grade = grade;
    newNode->next = nullptr;
    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *current = head;
    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = newNode;
}

void Traverse(Node *head, bool &istrue)
{
    if (head == nullptr)
    {
        cout << "EMPTY LINKED LIST ADD FIRST\n";
        istrue = false;
        return;
    }

    Node *current = head;
    int count = 1;

    while (current != nullptr)
    {
        cout << "STUDENT " << count << endl;
        cout << "ID: " << current->id << endl;
        cout << "Name: " << current->name << endl;
        cout << "Grade: " << current->grade << endl;
        current = current->next;
        count++;
    }
}

void Delete_STUDENT_FROM_BEGIN(Node *&head)
{
    if (head == nullptr)
    {
        cout << "NO STUDENT TO DELETE\n";
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

void Add_Student_AtPosition(Node *&head)
{
    int id, find_id;

    string name;
    double grade;

    cout << "ENTER BEFORE ID YOU WANT TO INSERT NEW STUDENT: ";
    cin >> find_id;

    Node *current = head;
    bool isfound = false;
    while (current != nullptr)
    {
        if (current->id == find_id)
        {
            isfound = true;
            break;
        }
        current = current->next;
    }

    if (!isfound)
    {
        cout << "STUDENT NOT FOUND \n";
        return;
    }

    Node *newNode = new Node;

    cout << "ENTER ID OF NEW STUDENT: ";
    cin >> id;
    cout << "ENTER NAME: ";
    cin >> name;
    cout << "ENTER GRADE: ";
    cin >> grade;

    newNode->id = id;
    newNode->name = name;
    newNode->grade = grade;

    newNode->next = current->next;
    current->next = newNode;
}

void Delete_Student_end(Node *&head)
{
    // If the list is empty, there is nothing to remove.
    if (head == nullptr)
    {
        cout << "NO STUDENT TO DELETE\n";
        return;
    }

    // If there is only one node, delete it and set the head to null.
    if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
        return;
    }

    // Move to the node just before the last one.
    Node *current = head;
    while (current->next->next != nullptr)
    {
        current = current->next; // Important: advance the pointer to the next node.
    }

    // Delete the last node and disconnect it from the list.
    Node *temp = current->next;
    current->next = nullptr;
    delete temp;
}

void Delete_Student_At_Position(Node *&head)
{
    // Safety check: empty list cannot be deleted.
    if (head == nullptr)
    {
        cout << "NO STUDENT TO DELETE\n";
        return;
    }

    int targetid;
    cout << "ENTER TARGET ID: ";
    cin >> targetid;

    if (head->id == targetid)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *current = head;
    Node *previous = nullptr;

    while (current!= nullptr)
    {

        if (current->id == targetid)
        {
            // 20               30 ->NEXT = 40
            previous->next = current->next;
            // NOW THE 20 IS NOW CONNECTED TO THE 40
            delete current;
            // YOU CAN SAFELY DELET THE 30 NOW;
            return;
        }

        previous = current;
        current = current->next;
    }

    cout << "STUDENT NOT FOUND\n";
}

void Search_Student_ByID(Node *head)
{
    if (head == nullptr)
    {
        cout << "EMPTY LIST ADD FIRST";
        return;
    }

    if (head->next == nullptr)
    {
        cout << "ONLY ONE STUDENT HERE: \n";
        cout << " STUDENT 1: \n";
        cout << "ID: " << head->id << endl;
        cout << "NAME: " << head->name << endl;
        cout << "GRADE: " << head->grade << endl;
        return;
    }

    int targetId;
    cout << "ENTER  TARGET ID: ";
    cin >> targetId;

    Node *current = head;
    int position = 0;
    while (current != nullptr)
    {
        position++;
        if (current->id == targetId)
        {
            cout << "STUDENT FOUND\n";
            cout << "STUDENT " << position << endl;
            cout << endl;
            cout << "ID: " << current->id << endl;
            cout << "NAME: " << current->name << endl;
            cout << "GRADE: " << current->grade << endl;
            return;
        }

        current = current->next;
    }

    cout << "STUDENT NOT FOUND";
}

void Update_Student(Node* & head) {
    if(head == nullptr) {
        cout << "NO STUDENT ADD FIRST\n";
        return;
    }

     int targetId;
    cout << "ENTER  TARGET ID: ";
    cin >> targetId;

    Node *current = head;
    int position = 0;
    while (current != nullptr)
    {
        position++;
        if (current->id == targetId)
        {
            cout << "STUDENT FOUND\n";
            cout << "STUDENT " << position << endl;
            cout << endl;
            cout << "----CURRENT STUDENT INFORMATION----\n";
            cout << "ID: " << current->id << endl;
            cout << "NAME: " << current->name << endl;
            cout << "GRADE: " << current->grade << endl;


            string name;
            int id;
            double grade;

            cout << "ENTER NEW ID: ";
            cin >> id;
            cin.ignore();
            cout << "ENTER NEW NAME: ";
            getline(cin, name);

            cout << "ENTER NEW GRADE: ";
            cin >> grade;

            current->id = id;
            current->name = name;
            current->grade = grade;
        
            return;
        }

        current = current->next;
    }

    cout << "STUDENT NOT FOUND\n";

}

int main()
{

    Node *head = nullptr;

    int choice;
    do
    {
        bool istrue = true;
        menu(choice);
        switch (choice)
        {
        case 1:
            Add_Student_Beginning(head);
            break;
        case 2:
            Add_Student_End(head);
            break;

        case 3:
            Traverse(head, istrue);
            if (istrue)
            {
                Add_Student_AtPosition(head);
            }
            break;

        case 4:
            Delete_STUDENT_FROM_BEGIN(head);
            break;

        case 5:
            Delete_Student_end(head);
            break;

        case 6:
            Traverse(head, istrue);
            if (istrue)
            {
                Delete_Student_At_Position(head);
            }
            break;

        case 7:
            Search_Student_ByID(head);
            break;
        case 8:
            Update_Student(head);
            break;

        case 9:
            Traverse(head,istrue);
            break;

        case 10:

            cout << "PROGRAMM EXIT";

            break;

        default:

            cout << "INVALID INPUT\n";
            break;
        }
    } while (choice != 10);

    return 0;
}