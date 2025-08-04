#include <iostream>
using namespace std;
int cube(int num)
{
    return num * num * num;
}
float average(int a, int b)
{
    return (a + b) / 2.0;
}
string fullname(string s1, string s2)
{
    return s1 + " " + s2;
}
int factorial(int num) // 5
{
    int fact = 1, i;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
// int greatest(int a, int b)
// {
//     if (a > b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

int greatest(int a, int b)
{
    return a > b ? a : b;
}
int great(int a, int b, int c)
{
    return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

char uppercase(char ch) // a
{
    return ch - 32;
}
int main()
{
    cout << "cube of 3 = " << cube(3) << endl;
    cout << "average = " << average(12, 21) << endl;
    cout << "full name = " << fullname("chetan", "patel") << endl;
    cout << "fcatorial of 5 = " << factorial(5) << endl;
    cout << "greatest num = " << greatest(670, 400) << endl;
    cout << "greatest num = " << great(6700, 4000, 900) << endl;
    cout << "uppercase  = " << uppercase('a') << endl;
    return 0;
}