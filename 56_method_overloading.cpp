#include <iostream>
using namespace std;
class display
{
public:
    void disp(int a)
    {
        cout << "data = " << a << endl;
    }
    void disp(char a)
    {
        cout << "data = " << a << endl;
    }
    void disp(float a)
    {
        cout << "data = " << a << endl;
    }
    void disp(string a)
    {
        cout << "data = " << a << endl;
    }
};
int main()
{
    display d1;
    d1.disp(12);
    d1.disp(78.45f);
    d1.disp('j');
    d1.disp("home");
    return 0;
}