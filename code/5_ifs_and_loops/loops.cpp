#include <iostream>

using namespace std;

int main()
{

    // simple for loop

    int a[10];

    for (int i = 0; i < 10; i++)
    {             // starts on i = 0, goes up by one every time and ends on i = 9
        a[i] = i; // if we were to do for(int i = 0; i <= 10; i++) we'd have a seg fault
        cout << a[i] << " ";
    }

    cout << endl;

    // foreach

    for (int x : a)
        // it will loop through all of the contents in arr
        cout << x << " ";

    cout << endl;

    // while

    char answer = 'a';

    while (answer != 'y')
    {
        // the program will only move on from this loop if answer is either equal to 'y' or 'n'
        cout << "would you like to continue? (y/n) ";
        cin >> answer;
        if (answer != 'y' && answer != 'n')
            cout << "that was not one of the options!\n";
    }

    // do while

    char ans;

    do
    {
        cout << "would you like to move on? (y/n) ";
        cin >> ans;
    } while (ans != 'y' && ans != 'n');

    // nested loops

    cout << "let's go over the multiplication table!" << endl;

    for (int i = 1; i <= 10; i++)
    {                                                          // this a for loop going from 1 to 10
        for (int j = 1; j <= 10; j++)                          // this is another for loop going from 1 to 10
            cout << i << " * " << j << " = " << i * j << endl; // the program will enter the loops with i = 1, it will go over all of the js and then continue to i = 2, etc
        cout << endl;
    }

    cout << endl;

    return 0;
}