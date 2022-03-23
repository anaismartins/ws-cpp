#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n = 3;
    cout << "n is " << n << "\n";

    double f = 3.14;
    cout << "f is " << f << "\n";

    char c = 97; // a in ascii
    char c2 = 'a';
    cout << "c is " << c << " but also " << c2 << "\n";

    string s = "hello mars"; // '' and "" are not the same in C++!
    cout << s << "\n";

    bool b = true;
    cout << "b is " << b << "\n"; // b is 1

    // other variable types
    cout << "but there are other variable types!!\n";
    vector<int> v = {1, 2, 3}; // needs include <vector>
    cout << "the number in the second position in v is " << v[1];

    return 0;
}