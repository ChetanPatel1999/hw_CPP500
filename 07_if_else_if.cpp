// wap to check given char is vovel or consonent.
#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout << "enter a alpha : ";
    cin >> alpha;
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        cout << "alpha is vovel";
    }
    else
    {
        cout << "alpha is consonent";
    }
    return 0;
}