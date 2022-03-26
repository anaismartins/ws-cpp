#include <iostream>

using namespace std;

int main()
{

    int a = 5;
    int b = a; // b = 5

    cout << "b: " << b << endl;

    a += b; // a = 10

    cout << "a: " << a << endl;

    b -= a; // b = -5

    cout << "b: " << b << endl;

    a *= b; // a = -50

    cout << "a: " << a << endl;

    b /= a; // b = 0.1? 0

    cout << "b: " << b << endl;

    a %= b; // divide by zero!!!!

    cout << "a: " << a << endl;

    return 0;
}