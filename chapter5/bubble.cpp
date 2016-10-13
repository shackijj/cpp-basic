#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nums[10];
    int a, b, t;
    int size;

    size = 10;

    for(t = 0; t < size; t++) {
        nums[t] = rand();
    }

    cout << "Massive at start: ";

    for(t = 0; t < size; t++) {
        cout << nums[t] << " ";
    }
    cout << "\n";

    for(a = 0; a < size; a++) {
        for(b = 0; b < size - 1 - a; b++) {
            if (nums[b] > nums[b + 1]) {
                t = nums[b];
                nums[b] = nums[b + 1];
                nums[b + 1] = t; 
            }
        }
    }

    cout << "Massive at end: ";

    for(t = 0; t < size; t++) {
        cout << nums[t] << " ";
    }
    cout << "\n";

    return 0;
}
