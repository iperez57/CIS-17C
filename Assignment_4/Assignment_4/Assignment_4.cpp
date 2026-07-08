// Assignment_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
