#include <iostream>

using namespace std;

class Dog
{
public:
    int age = 0;
    string fluffLevel = "fluffly";

    Dog() { ; }

    Dog(int x)
    {
        age = x;
    }

    Dog(string fluff)
    {
        fluffLevel = fluff;
    }

    Dog(int x, string fluff)
    {
        age = x;
        fluffLevel = fluff;
    }

    void birthday()
    {
        ++age;
    }
};

main()
{

    int g;
    Dog husky;
    cout << husky.age << endl;
    husky.birthday();
    cout << husky.age << endl;

    Dog golden(1);
    Dog shibu("very fluffy");

    cout << golden.age << endl;
    cout << shibu.fluffLevel << endl;

    return 0;
}