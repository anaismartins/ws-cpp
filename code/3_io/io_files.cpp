#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ofstream outfile; // output only
    outfile.open("outfile.txt");

    outfile << "hello venus";

    outfile.close();

    ifstream infile; // input only
    infile.open("infile.txt");

    string text;
    getline(infile, text);

    cout << text;

    infile.close();

    return 0;
}