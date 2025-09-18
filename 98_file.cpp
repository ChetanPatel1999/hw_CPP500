#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("facto.txt");
    string s;

    while (read.eof() != 1)
    {
        read >> s;
        cout << s << " ";
    }

    read.close();
    return 0;
}