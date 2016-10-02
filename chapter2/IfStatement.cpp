#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Введите значение первого числа: ";
    cin >> a;

    cout << "Введите значение второго числа: ";
    cin >> b;

    if (a < b) {
        cout << "Второе число больше первого";
    }

    return 0;
}
