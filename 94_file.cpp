#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream write;
    write.open("C:\\Users\\WIN\\Desktop\\fileOperation\\home.text");
    string s;
    int i = 1;
    while (i <= 3)
    {
        cout << "enter some data : ";
        getline(cin, s);
        cout << s << endl;
        write << s << "\n";
        i++;
    }
    write.close();

    return 0;
}