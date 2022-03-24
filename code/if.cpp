#include <iostream>

using namespace std;

int main()
{

    // simple if

    if (1)
    {
        cout << "i love c++!\n";
    }

    int a = 5;
    int b = 7;

    // difference between if if and if else if

    if (a < b)
    {
        cout << "a is smaller than b\n";
        a = 8;
    }
    if (a > b)
    {
        cout << "a is larger than b\n";
    }

    a = 5;

    if (a < b)
    {
        cout << "a is smaller than b\n";
        a = 8;
    }
    else if (a > b)
    {
        cout << "a is larger than b\n";
    }
    else
    {
        cout << " and b are the same\n";
    }

    // switch operator

    int c = 3;

    switch (c)
    {
    case 1:
        cout << "c is 1\n";
        break;
    case 2:
        cout << "c is 2\n";
    case 3:
        cout << "c is 3\n";
        break;
    }

    // ternary operator

    3 > 5 ? printf("this is true\n") : printf("this is false!!\n");

    return 0;
}