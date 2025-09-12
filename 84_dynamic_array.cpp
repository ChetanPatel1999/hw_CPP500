// dyanamic object in cpp
#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sal;

public:
    void setdata()
    {
        cout << "enter emp info : " << endl;
        cout << "enter id : ";
        cin >> id;
        cout << "enter sal : ";
        cin >> sal;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
int main()
{
    emp *ptr = new emp[3];
    emp *temp = ptr;
    int i;
    for (i = 0; i < 3; i++)
    {
        ptr->setdata();
        ptr++;
    }

    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }

    return 0;
}