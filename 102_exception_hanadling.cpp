#include <iostream>
using namespace std;
int main()
{
    int x = -12;
    printf("start program \n");
    try
    {
        cout << "enter inside try" << endl;
        if (x < 0)
        {
            throw x;
        }
        cout << "value of x : " << x << endl;
        cout << "try run succefully" << endl;
    }
    catch (int ex)
    {
        cout << "catch block exicute" << endl;
        cout << "nagative value error value = " << ex << endl;
    }
    printf("after try catch block\n");
    cout << "program run succefully using try catch block" << endl;

    return 0;
}