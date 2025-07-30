// wap to check given char is vovel or consonent.
#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "enter a alpha : ";
    cin >> alpha;
    if (alpha >= 'A' && alpha <= 90 || alpha >= 97 && alpha <= 122)
    {
        if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
        {
            cout << "alpha is vovel";
        }
        else
        {
            cout << "alpha is consonent";
        }
    }
    else
    {
        cout << "character is not alphabet";
    }
    return 0;
}