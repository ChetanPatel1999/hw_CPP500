#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    void setEmp(int a, float b)
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
    void setPrgm(string s1, string s2)
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
    programmer p1, p2;
    p1.setEmp(101, 12000);
    p1.setPrgm("c++", "music app");
    p1.displayEmp();
    p1.displayPrgm();
    return 0;
}