// Assignment_1_PtE.cpp

#include <iostream>

using namespace std;

void deleteS(char* c)
{
    char* s = c;

    while (*c != '\0')
    {
        if (*c != 's' && *c != 'S')
        {
            *s = *c;
            s++;
        }
        c++;
    }
    *s = '\0';
}


int main()
{
    char sent[] = "So whats the weather like";
    deleteS(sent);

    cout << sent << endl;
}