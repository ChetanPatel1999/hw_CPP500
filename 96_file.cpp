#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("facto.txt");
    string s;
    read >> s;
    cout << s << " ";
    read >> s;
    cout << s;
    read.close();
    return 0;
}