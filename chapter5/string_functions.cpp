#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char s1[82], s2[41];

    cout << "Input 2 strings";
    gets_s(s1, 40);
    gets_s(s2, 40);

    cout << "Length of them: " << strlen(s1);
    cout << ' ' << strlen(s2) << '\n';

    if (strcmp(s1, s2) == 0) {
        cout << "Strings are equal\n";
    } else {
        cout << "Strings are not equal\n";
    }

    strcat(s1, s2);
    cout << s1 << '\n';

    return 0;
}
