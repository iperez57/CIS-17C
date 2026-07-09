#include "MyQueue.h"
#include <climits>
#include <iostream>

using namespace std;

MyQueue::MyQueue()
{
	dummy.value = 0;
	dummy.next = nullptr;
}

MyQueue::MyQueue(const MyQueue& rhs)
{
	dummy.value = rhs.dummy.value;
	dummy.next = nullptr;

	Node* current = rhs.dummy.next;
	Node* tail = &dummy;

	while(current != nullptr)
	{
		tail->next = new Node;
		tail = tail->next;

		tail->value = current->value;
		tail->next = nullptr;

		current = current->next;
	}
}

MyQueue MyQueue::operator=(const MyQueue& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	Node* current = dummy.next;
	Node* temp;
	Node* srcCurrent = rhs.dummy.next;

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

void MyQueue::push(int v)
{
	Node* newNode = new Node;
	Node* current = &dummy;

	newNode->value = v;
	newNode->next = nullptr;

	while (current->next != nullptr)
	{
		current = current->next;
	}

	current->next = newNode;
}

int MyQueue::pop()
{
	if (dummy.next == nullptr)
	{
		return INT_MIN;
	}
	
	Node* temp = dummy.next;
	int n = temp->value;

	dummy.next = temp->next;

	delete temp;
	return n;
}

int MyQueue::peek()
{
	if (dummy.next == nullptr)
	{
		return INT_MIN;
	}

	int n = dummy.next->value;

	return n;
}

int MyQueue::size()
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

void MyQueue::printQueue()
{
	Node* current = dummy.next;

	while (current != nullptr)
	{
		cout << current->value << " ";
		current = current->next;
	}
	cout << endl;
}

MyQueue::~MyQueue()
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