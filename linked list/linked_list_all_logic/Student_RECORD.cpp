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

void Traverse(Node *head)
{
    if (head == nullptr)
    {
        cout << "EMPTU LILNKED LIST ADD FIRST\n";
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

void Add_Student_AtPosition(Node *&head)
{
    int position, id;
    string name;
    double grade;

    // Ask the user for the insertion position in the linked list.
    cout << "Enter position to insert: ";
    cin >> position;
    cin.ignore();

    // Read the student ID.
    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();

    // Read the student name, allowing spaces in the name.
    cout << "Enter Student Name: ";
    getline(cin, name);

    // Read the student grade.
    cout << "Enter Student Grade: ";
    cin >> grade;
    cin.ignore();

    // Create a new node to store the new student record.
    Node *newNode = new Node;
    newNode->id = id;
    newNode->name = name;
    newNode->grade = grade;
    newNode->next = nullptr;

    // If the list is empty or the user wants to insert at the beginning,
    // place the new node at the head of the list.
    if (head == nullptr || position <= 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse the list to find the node before the insertion position.
    Node *current = head;
    int count = 1;

    while (current != nullptr && count < position - 1)
    {
        current = current->next;
        count++;
    }

    // If the position is beyond the last element, append the new node at the end.
    if (current == nullptr)
    {
        Node *tail = head;
        while (tail->next != nullptr)
        {
            tail = tail->next;
        }
        tail->next = newNode;
        return;
    }

    // Insert the new node after the node found in the traversal.
    newNode->next = current->next;
    current->next = newNode;
}

int main()
{

    Node *head = nullptr;

    int choice;
    do
    {
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
            Traverse(head);
            break;

        case 4:

            break;

        case 5:

            break;

        case 6:

            break;

        case 7:

            break;
        case 8:

            break;

        case 9:

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