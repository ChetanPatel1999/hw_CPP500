#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b)
    {
        id = a;
        sal = b;
    }
    void displayEmp()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};

class programmer : public emp
{
    string lang;
    string project;

public:
    programmer(int a, int b, string s1, string s2) : emp(a, b)
    {
        lang = s1;
        project = s2;
    }
    void displayPrgm()
    {
        cout << "language  :  " << lang << endl;
        cout << "project  :  " << project << endl;
    }
};
int main()
{
    programmer p1(101, 12000, "c++", "music app");
    p1.displayEmp();
    p1.displayPrgm();
    return 0;
}