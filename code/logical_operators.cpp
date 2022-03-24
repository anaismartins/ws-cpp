#include <iostream>

using namespace std;

int main()
{

    cout << "let's use AND!\n1. " << (0 && 0) << "\n2. " << (0 && 1) << "\n3. " << (1 && 0) << "\n4. " << (1 && 1) << endl
         << endl;

    cout << "let's use OR!\n1. " << (0 || 0) << "\n2. " << (0 || 1) << "\n3. " << (1 || 0) << "\n4. " << (1 || 1) << endl
         << endl;

    cout << "let's use NOT!\n1. " << (!0) << "\n2. " << (!1) << endl
         << endl;

    return 0;
}