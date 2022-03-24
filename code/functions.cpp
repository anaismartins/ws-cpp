#include <iostream>

using namespace std;

void printing(string name = "friend");
int summing(int a, int b);

int main()
{

    string name;

    cout << "what's your name? ";
    cin >> name;

    printing(name);

    int sum = summing(1, 2);

    cout << "the sum is " << sum << endl;

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