// Assignment_4_PtB.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "MyQueue.h"

using namespace std;

int main()
{
    MyQueue S;

    S.push(1);
    S.push(2);
    S.push(3);
    S.push(5);
    S.push(6);
    cout << "Testing push()" << endl;
    S.printQueue();

    S.pop();
    cout << "Testing pop()" << endl;
    S.printQueue();

    cout << "Testing peek()" << endl;
    cout << S.peek() << endl;

    cout << "Testing size()" << endl;
    cout << S.size() << endl;

    S.pop();
    S.pop();
    S.pop();
    S.pop();

    cout << "Testing pop() over size limit" << endl;
    cout << S.pop() << endl;

    cout << "Testing peek() on empty stack" << endl;
    cout << S.peek() << endl;
}
