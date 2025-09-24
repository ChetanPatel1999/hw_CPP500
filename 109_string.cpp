// wap to print only vovel character from given string.
#include <iostream>
using namespace std;
int main()
{
    string s;
    s = "welcome";
    int i;
    cout << "string : " << s << endl;
    cout << "vovel char : ";
    for (i = 0; i < s.length(); i++) // 7
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            cout << s[i];
        }
    }

    return 0;
}