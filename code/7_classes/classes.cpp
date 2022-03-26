#include <string>
#include <iostream>

using namespace std;

class Dog
{
public:
    int age = 0;
    string fluffLevel = "fluffy";

    Dog(){};
    Dog(int xage)
    {
        age = xage;
    };
    Dog(string fluff)
    {
        fluffLevel = fluff;
    }

    void birthday()
    {
        ++age;
    };

}; // SEMICOLON VERY IMPORTANT!!!

int main()
{
    Dog husky;
    Dog golden(1);
    Dog shibu("very fluffy");

    cout << "shibu's age: " << (shibu.age) << endl;
    cout << "shibu's fluff: " << shibu.fluffLevel << endl;
    shibu.birthday();
    cout << "it's shibu's birthday! now she is " << shibu.age << endl;

    return 0;
}