#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream read("facto.txt");
    string s;
    getline(read, s);
    cout << s << endl;
    getline(read, s);
    cout << s;
    read.close();
    return 0;
}