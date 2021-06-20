#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{

    string text;

    ifstream file(argv[1]);

    while (getline(file, text)) {
        cout << text;
    }

    return 0;
}