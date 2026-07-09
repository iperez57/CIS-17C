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

