// how to take object data form user
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setemp()
    {
        cout << "enter emp info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary : ";
        cin >> sallary;
    }
    void getemp()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-----------------------" << endl;
    }
};
int main()
{
    emp e1, e2, e3;
    e1.setemp();
    e2.setemp();
    e3.setemp();
    e1.getemp();
    e2.getemp();
    e3.getemp();
    return 0;
}