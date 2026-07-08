#include <iostream>
#include "Node.h"
#include "MyStack.h"
#include <climits>

using namespace std;

MyStack::MyStack()
{
	dummy.next = nullptr;
	dummy.value = 0;
}

MyStack::MyStack(const MyStack& rhs)
{
	dummy.value = rhs.dummy.value;
	dummy.next = nullptr;

	Node* current = rhs.dummy.next;
	Node* tail = &dummy;

	while (current != nullptr)
	{
		tail->next = new Node;
		tail = tail->next;

		tail->value = current->value;
		tail->next = nullptr;

		current = current->next;
	}
}

MyStack MyStack::operator=(const MyStack& rhs)
{
	Node* current = dummy.next;
	Node* temp;
	Node* srcCurrent = rhs.dummy.next;

	if (this == &rhs)
	{
		return *this;
	}

	while (current != nullptr)
	{
		temp = current->next;
		delete current;
		current = temp;
	}

	dummy.next = nullptr;
	dummy.value = rhs.dummy.value;
	
	Node* tail = &dummy;

	while (srcCurrent != nullptr)
	{
		tail->next = new Node;
		tail = tail->next;

		tail->value = srcCurrent->value;
		tail->next = nullptr;

		srcCurrent = srcCurrent->next;
	}
	return *this;
}

void MyStack::push(int v)
{
	Node* newNode = new Node;

	newNode->value = v;
	newNode->next = dummy.next;

	dummy.next = newNode;
}

int MyStack::pop()
{
	int n;

	if (dummy.next == nullptr)
	{
		return INT_MIN;
	}

	Node* current = dummy.next;

	dummy.next = current->next;
	n = current->value;

	delete current;
	return n;
}

int MyStack::peek()
{
	if (dummy.next == nullptr)
	{
		return INT_MIN;
	}
	else
	{
		return dummy.next->value;
	}
}

int MyStack::size()
{
	int counter = 0;
	Node* current = dummy.next;

	while (current != nullptr)
	{
		counter++;
		current = current->next;
	}
	return counter;
}

void MyStack::printStack()
{
	Node* current = dummy.next;

	while (current != nullptr)
	{
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

MyStack::~MyStack()
{
	Node* current = dummy.next;

	while (current != nullptr)
	{
		Node* temp = current->next;
		delete current;
		current = temp;
	}
	dummy.next = nullptr;
}