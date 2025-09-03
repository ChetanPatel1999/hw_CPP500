#include <iostream>
using namespace std;
class parent
{
public:
    string result(int per)
    {
        if (per > 33)
        {
            return "pass";
        }
        else
        {
            return "fail";
        }
    }
};
class child : public parent
{
public:
    string result(int per) // method override
    {
        if (per > 40)
        {
            return "pass";
        }
        else
        {
            return "fail";
        }
    }
};
int main()
{
    parent p1;
    cout << p1.result(56) << endl;

    child c1;
    cout << c1.result(38) << endl;

    return 0;
}