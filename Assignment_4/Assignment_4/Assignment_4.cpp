// Assignment_4.cpp
#include <iostream>
#include "MyStack.h"
#include "Node.h"

using namespace std;

int main()
{
    MyStack S;

    S.push(1);
    S.push(2);
    S.push(3);
    S.push(5);
    S.push(6);
    cout << "Testing push()" << endl;
    S.printStack();

    S.pop();
    cout << "Testing pop()" << endl;
    S.printStack();

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