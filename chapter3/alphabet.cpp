#include <iostream>
using namespace std;

int main()
{
    char letter;

    for(letter = 'Z'; letter >= 'A'; letter--) {
        cout << letter;
    }

    cout << "\a";

    return 0;
}
