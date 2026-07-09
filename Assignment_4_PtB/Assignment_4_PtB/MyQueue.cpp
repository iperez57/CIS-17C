#include "MyQueue.h"

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