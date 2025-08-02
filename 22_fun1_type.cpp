#include <iostream>
using namespace std;
void add()
{
    int a, b, c;
    cout << "enter two number : ";
    cin >> a >> b;
    c = a + b;
    cout << "sum = " << c << endl;
}
void sub(int a, int b)
{
    int c;
    c = a - b;
    cout << "sub = " << c << endl;
}
void voterCheck(string name, int age)
{
    if (age >= 18)
    {
        cout << name << " you can vote" << endl;
    }
    else
    {
        cout << name << " you can not vote try after " << 18 - age << " year" << endl;
    }
}
int main()
{
    // sub(12, 8);
    voterCheck("chetan", 12);
    voterCheck("laddu", 21);
    string s = "saniya";
    int a = 34;
    voterCheck(s, a);
    return 0;
}