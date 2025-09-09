#include <iostream>
using namespace std;
class parent
{
public:
    parent(int a)
    {
        cout << "1 arg parent constructor is called" << endl;
    }
    parent(int a, int b)
    {
        cout << "2 arg parent constructor is called" << endl;
    }
};
class child : public parent
{
public:
    child() : parent(78)
    {
        cout << "0 arg child constructor is called" << endl;
    }
    child(int a) : parent(6, 9)
    {
        cout << "1 arg child constructor is called" << endl;
    }
    child(int a, int b) : parent(12)
    {
        cout << "2 arg child constructor is called" << endl;
    }
};
int main()
{
    child c1;
    return 0;
}