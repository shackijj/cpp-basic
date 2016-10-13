#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    char str[81];

    cout << "Input string: ";
    gets_s(str, 80);
    cout << "Your string is: ";
    cout << str;

    return 0;
}
