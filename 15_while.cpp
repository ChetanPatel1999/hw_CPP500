#include <iostream>
using namespace std;
int main()
{
    int num, rem, sum = 0;
    cout << "enter a num : ";
    cin >> num; // 345
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "sum of individual digit = " << sum << endl;
    return 0;
}