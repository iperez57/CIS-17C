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