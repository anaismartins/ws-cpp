#include <string>
#include <iostream>

using namespace std;

void printing(string name);
int summing(int a, int b);

int main()
{

    printing("ola");

    int a = 2;
    int b = 5;

    int sum = summing(a, b);

    cout << sum << endl;

    return 0;
}

void printing(string name)
{
    cout << "hello " << name << endl;
}

int summing(int a, int b)
{
    return a + b;
}