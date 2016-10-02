#include <iostream>
using namespace std;

void myfunc();

int main()
{
    cout << "В функции main.";

    myfunc();

    cout << "Снова в функции main";

    return 0;
}

void myfunc() 
{
    cout << " В функции myfunc. ";
}
