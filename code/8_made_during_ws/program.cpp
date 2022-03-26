#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{

    printf("hello world");
    cout << "hello world";

    int n = 3;
    double f = 3.14;
    char c = 97;
    char c2 = 'a';
    string s = "hello";
    bool b = true;

    int v[3];

    vector<int> v2;

    string name;

    cout << "hello what's your name? ";
    cin >> name;
    cout << name << endl;

    ofstream outfile;
    outfile.open("text.txt");
    outfile << "hello venus";
    outfile.close();

    ifstream infile;
    infile.open("infile.txt");

    string text;
    getline(infile, text);
    cout << text;

    infile.close();

    int a = 1 + 2;
    int d = 7 / 8;
    double d2 = 7. / 8.0;

    cout << d << " " << d2 << endl;

    int f2 = 11;
    ++f2;
    f2++;
    int g = 12;
    --g;

    cout << f2 << " " << g << endl;

    int a2 = 5;
    int b2;

    b2 = a2;

    cout << b2 << endl;

    a2 += b2; // a2 = a2 + b2 = 5 + 5 = 10

    cout << a2 << endl;

    // a2 = 10, b2 = 5

    cout << (a2 == b2) << endl;
    cout << (a2 != b2) << endl;

    cout << (0 && 0) << " " << (0 && 1) << " " << (1 && 1) << " " << (1 && 0) << endl;
    cout << (0 || 0) << " " << (1 || 0) << " " << (1 || 1) << endl;
    cout << (!0) << " " << (!1) << endl;

    // a2 = 10, b2 = 5

    if (a2 > b2)
    {
        cout << "hello mars" << endl;
        a2 = 3;
    }
    if (a2 < b2)
    {
        cout << "hello uranus" << endl;
    }

    a2 = 10; // b2 = 5

    if (a2 > b2)
    {
        cout << "hello mars" << endl;
        a2 = 3;
    }
    else if (a2 < b2)
    {
        cout << "hello hs" << endl;
    }
    else
    {
        cout << "hello tiago almeida" << endl;
    }

    int hello = 3;

    switch (hello)
    {
    case 1:
        cout << "hello is 1" << endl;
        break;
    case 2:
        cout << "hello is 2" << endl;
        break;
    case 3:
        cout << "hello is 3" << endl;
        break;
    }

    3 < 5 ? cout << "correct" : cout << "worng";

    int zarray[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int z = 0; z < 10; z++)
    {
        cout << zarray[z] << endl;
    }

    for (int x : zarray)
        cout << x[zarray] << endl;

    char answer = 'a';

    while (answer != 'y')
    {
        cout << "would you like to conitnue? ";
        cin >> answer;
    }

    char answer2;

    do
    {
        cout << "would you liek to continue? ";
        cin >> answer2;
    } while (answer2 != 'y');

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j * i << endl;
        }
    }

    

    return 0;
}