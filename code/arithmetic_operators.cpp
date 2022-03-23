#include <iostream>

using namespace std;

int main()
{

    int a = 1 + 2;
    int b = 3 - 4;
    int c = 5 * 6;
    int d = 7 / 8;
    double d2 = 7. / 8.;

    cout << "a: " << a << "\nb: " << b << "\nc: " << c << "\nd: " << d << " or d? " << d2 << "\n\n";

    int e = 9 % 10;

    cout << "e: " << e << "\n\n";

    int f = 11;
    ++f;
    int g = 12;
    --g;

    cout << "f: " << f << "\ng: " << g << "\n\n";

    return 0;
}