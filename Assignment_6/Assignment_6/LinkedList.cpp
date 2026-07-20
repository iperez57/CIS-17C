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

LinkedList::~LinkedList()
{
    deleteRecursive(head);
    head = nullptr;
}

LinkedList& LinkedList::operator=(const LinkedList & src)
{
    //STUDENT COMPLETES THIS
    Node* current = head;
    Node* temp;
    Node* srcCurrent = src.head;


    if (this == &src)
    {
        return *this;
    }

    while (current != nullptr)
    {
        temp = current->next;
        delete current;
        current = temp;
    }
    head = nullptr;

    if (src.head == nullptr)
    {
        return *this;
    }

    head = new Node;
    head->value = srcCurrent->value;
    head->next = nullptr;

    Node* tail = head;

    srcCurrent = srcCurrent->next;

    while (srcCurrent != nullptr)
    {
        Node* newNode = new Node;
        newNode->value = srcCurrent->value;
        newNode->next = nullptr;

        tail->next = newNode;
        tail = newNode;

        srcCurrent = srcCurrent->next;
    }

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
    //STUDENT COMPLETES THIS
    Node* current = head;

    while (current != nullptr)
    {
        cout << current->value << endl;
        current = current->next;
    }

}

void LinkedList::deleteRecursive(Node* current)
{
    if (current == nullptr)
        return;
    deleteRecursive(current->next);

    delete current;
}