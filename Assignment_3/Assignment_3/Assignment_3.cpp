#include <iostream>

using namespace std;

struct Node 
{
    int value;
    Node* next;
};

class LinkedList 
{
private:
    Node* head;
public:
    LinkedList() 
    {
        //STUDENT COMPLETES THIS
        head = nullptr;
    }

    LinkedList(const LinkedList& First) 
    {
        //STUDENT COMPLETES THIS
        head = nullptr;

        if (First.head == nullptr)
        {
            return;
        }

        Node* current = First.head;

        head = new Node;
        head->value = current->value;
        head->next = nullptr;

        Node* tail = head;

        current = current->next;

        while (current != nullptr)
        {
            Node* newNode = new Node;
            newNode->value = current->value;
            newNode->next = nullptr;

            tail->next = newNode;
            tail = newNode;

            current = current->next;
        }
    }

    ~LinkedList() 
    {
        //STUDENT COMPLETES THIS
        Node* current = head;
        
        while (current != nullptr)
        {
            Node* temp = current->next;
            delete current;
            current = temp;
        }
        head = nullptr;
    }

    LinkedList operator=(const LinkedList& src) 
    {
       //STUDENT COMPLETES THIS
    }

    int size() 
    {
        //STUDENT COMPLETES THIS
        int counter = 0;
        
        Node* current = head;

        while (current != nullptr)
        {
            counter++;
            current = current->next;
        }
        return counter;
    }

    void addToFront(int v) 
    {
        //STUDENT COMPLETES THIS
        Node* newNode = new Node;
        newNode->value = v;
        newNode->next = head;
        head = newNode;
    }

    void addToRear(int v) 
    {
        //STUDENT COMPLETES THIS
        Node* newNode = new Node;
        newNode->value = v;
        
        Node* current = head;

        if (current == nullptr)
        {
            head = newNode;
            return;
        }
        

        while (current != nullptr)
        {
            if (current->next == nullptr)
            {
                current->next = newNode;
                newNode->next = nullptr;
                return;
            }
            current = current->next;
        }
    }

    void deleteItem(int v) 
    {
        //STUDENT COMPLETES THIS
        Node* current = head;
        Node* previous = nullptr;
        
        while (current != nullptr)
        {
            if (current->value == v)
            {
                if (previous == nullptr)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }
    }

    void swapList(LinkedList& Other) 
    {
        //STUDENT COMPLETES THIS
        Node* temp;
        temp = this->head;
        this->head = Other.head;
        Other.head = temp;
    }

    void printItems() 
    {
        //STUDENT COMPLETES THIS
        Node* current = head;

        while (current != nullptr)
        {
            cout << current->value << endl;
            current = current->next;
        }

    }
};

int main() 
{
    //LEAVE MAIN ALONE PLEASE!!!  <--NO REALLY...I MEAN IT!!!
    //Testing the addToRear function

    LinkedList L;
    L.addToRear(1);
    L.addToRear(2);
    L.addToRear(3);
    L.addToRear(5);
    L.addToRear(6);

    cout << "Testing addToRear()" << endl;

    L.printItems();
    cout << endl;
    cout << endl;

    //Testing the addToFront function
    L.addToFront(7);
    L.addToFront(8);

    cout << "Testing addToFront()" << endl;

    L.printItems();
    cout << endl;
    cout << endl;

    //Testing the size function
    cout << "The size of the list L is " << L.size() << endl;
    cout << endl;
    cout << endl;

    //Testing the copy constructor
    LinkedList LL(L);
    cout << "Testing the copy constructor" << endl;
    LL.printItems();
    cout << endl;
    cout << endl;

    //Testing the swapList function
    LinkedList LLL;
    LLL.addToFront(20);
    LLL.addToFront(30);
    LLL.addToFront(40);
    LLL.addToFront(50);
    LL.swapList(LLL);

    cout << "Testing swapList()" << endl;
    cout << "This is the output of LL" << endl;
    LL.printItems();
    cout << endl;
    cout << "This is the output of LLL" << endl;
    LLL.printItems();
    cout << endl;
    cout << endl;

    //Testing the assignment "=" operator
    L = LL = LLL;
    cout << "Testing the assignment \"=\" operator" << endl;
    cout << "This is the output of L" << endl;
    L.printItems();
    cout << endl;
    cout << "This is the output of LL" << endl;
    LL.printItems();
    cout << endl;
    cout << "This is the output of LLL" << endl;
    LLL.printItems();
    cout << endl;
    cout << endl;

    //Testing the deleteItem function
    LLL.deleteItem(3);
    LLL.deleteItem(5);
    cout << "Testing deleteItem()" << endl;
    LLL.printItems();
    cout << endl;
    cout << endl;

    //Testing the remainder of the deleteItem function
    LLL.deleteItem(1);
    LLL.deleteItem(2);
    LLL.deleteItem(6);
    LLL.deleteItem(7);
    LLL.deleteItem(8);
    cout << "This list should be empty" << endl;
    LLL.printItems();
    cout << "Yep...the list was empty" << endl;
    cout << endl;
    cout << endl;

    //Testing the destructor operator
    cout << "Testing the destructor" << endl;
    L.~LinkedList();
    cout << "Destructor called.  This program still runs." << endl;
}