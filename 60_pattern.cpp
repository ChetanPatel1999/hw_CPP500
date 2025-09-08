#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) // 2
    {
        for (j = i; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                cout << j << " ";
            }
            else
            {

                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}