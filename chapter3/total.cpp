#include <iostream>
using namespace std;

void total(int x);

int main() 
{
    cout << "Вычисление суммы чисел от 1 до 5.\n";
    total(5);

    cout << "Вычисление суммы чисел от 1 до 6.\n";
    total(6);

    return 0;
}

void total(int x) 
{
    int sum = 0;
    int i;

    for (i = 1; i <= x; i++) {
        
        sum = sum + i;
        cout << "\t Промежуточная сумма равна " << sum << "\n";
    }
}