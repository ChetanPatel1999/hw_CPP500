#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "good morning " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good afternoon " << endl;
    }
};

class derieved : public base1, public base2
{
public:
    void greet()
    {
        base1::greet();
        base2::greet();
    }
};
int main()
{
    derieved o1;
    o1.greet();
    return 0;
}