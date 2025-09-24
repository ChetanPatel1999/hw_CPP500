#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "enter your name : ";
    // its take only single word
    // cin >> s;

    // take more then one word
    getline(cin, s);
    cout << "name : " << s << endl;
    return 0;
}