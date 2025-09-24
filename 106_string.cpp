#include <iostream>
using namespace std;
int main()
{
    string s;
    s = "welcome";
    int i;
    for (i = 0; s[i] != '\0'; i++) // 7
    {
        cout << s[i] << endl;
    }

    return 0;
}