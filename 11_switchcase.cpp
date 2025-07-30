// switch case
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num :";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "good morning";
        break;
    case 256:
        cout << "good after noon";
        break;
    case 3:
        cout << "good evening";
        break;
    case 4:
        cout << "good night";
        break;

    default:
        cout << "please enter 1,256,3,4";
        break;
    }
    return 0;
}