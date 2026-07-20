//LinkdList.cpp

#include "LinkedList.h"
#include <iostream>

using namespace std;
LinkedList::LinkedList()
{
    //STUDENT COMPLETES THIS
    head = nullptr;
}

LinkedList::LinkedList(const LinkedList& First)
{
    head = copyListRecursive(First.head);
}

LinkedList::~LinkedList()
{
    deleteRecursive(head);
    head = nullptr;
}

LinkedList& LinkedList::operator=(const LinkedList & src)
{
    if (this == &src)
        return *this;
    deleteRecursive(this->head);
    this->head = copyListRecursive(src.head);

    return *this;
}

int LinkedList::size()
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

void LinkedList::addToFront(int v)
{
    //STUDENT COMPLETES THIS
    Node* newNode = new Node;
    newNode->value = v;
    newNode->next = head;
    head = newNode;
}

void LinkedList::addToRear(int v)
{
    //STUDENT COMPLETES THIS
    Node* newNode = new Node;
    newNode->value = v;
    newNode->next = nullptr;


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

void LinkedList::deleteItem(int v)
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

void LinkedList::swapList(LinkedList& Other)
{
    //STUDENT COMPLETES THIS
    Node* temp;
    temp = this->head;
    this->head = Other.head;
    Other.head = temp;
}

void LinkedList::printItems()
{
    printListRecursive(head);
}

void LinkedList::deleteRecursive(Node* current)
{
    if (current == nullptr)
        return;
    deleteRecursive(current->next);

    delete current;
}

Node* LinkedList::copyListRecursive(const Node* rhs)
{
    if (rhs == nullptr)
        return nullptr;
    Node* newNode = new Node;
    newNode->value = rhs->value;
    newNode->next = copyListRecursive(rhs->next);

    return newNode;
}

void LinkedList::printListRecursive(Node* node)
{
    if (node == nullptr)
        return;
    cout << node->value << endl;
    printListRecursive(node->next);
}