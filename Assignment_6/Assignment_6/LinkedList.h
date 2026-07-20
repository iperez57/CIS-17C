//LinkedList.h

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList
{
private:
	Node* head;
	void deleteRecursive(Node* node);
	Node* copyListRecursive(const Node* rhs);
    void printListRecursive(Node* node);
    int getSizeRecursive(Node* node);
    void addToRearRecursive(Node* node, int i);
    void deleteItemRecursive(Node* node, int i);
    void swapListsRecursive(Node* lhs, Node* rhs);
public:
    LinkedList();
    LinkedList(const LinkedList& First);
    ~LinkedList();
    LinkedList& operator=(const LinkedList& src);
    int size();
    void addToFront(int v);
    void addToRear(int v);
    void deleteItem(int v);
    void swapList(LinkedList& Other);
    void printItems();
};

#endif