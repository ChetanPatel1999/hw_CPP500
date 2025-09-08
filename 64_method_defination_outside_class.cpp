// method defination outside class
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setemp(int, float);
    void getemp();
};
void emp::setemp(int a, float b)
{
    id = a;
    sallary = b;
}
void emp::getemp()
{
    cout << "emp info : " << endl;
    cout << "emp id : " << id << endl;
    cout << "emp sallary : " << sallary << endl;
    cout << "-----------------------" << endl;
}
int main()
{
    emp e1, e2, e3;
    e1.setemp(101, 50000);
    e2.setemp(102, 20000);
    e1.getemp();
    e2.getemp();
    return 0;
}