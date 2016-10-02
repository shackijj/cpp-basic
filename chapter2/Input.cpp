#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    double gallons, liters;

    cout << "Введите кол-во галлонов: ";
    cin >> gallons;

    liters = gallons * 3.7854;

    cout << "Литров: " << liters;

    return 0;
}
