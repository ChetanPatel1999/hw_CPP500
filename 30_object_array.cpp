// how to take object data form user
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setemp(int i)
    {
        cout << "enter emp" << i + 1 << " info : " << endl;
        cout << "enter emp id : ";
        cin >> id;
        cout << "enter emp sallary : ";
        cin >> sallary;
    }
    void getemp(int i)
    {
        cout << "emp" << i + 1 << " info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-----------------------" << endl;
    }
    float getsal()
    {
        return sallary;
    }
};
int main()
{
    int n;
    cout << "enter number of emp : ";
    cin >> n;
    emp e[n];
    int i;
    for (i = 0; i < n; i++)
    {
        e[i].setemp(i);
    }
    cout << "all company employ : " << endl;
    for (i = 0; i < n; i++)
    {
        e[i].getemp(i);
    }

    cout << "emp which salllary above 50000 : ";
    for (i = 0; i < n; i++)
    {
        if (e[i].getsal() > 50000)       
        {
            e[i].getemp(i);
        }
    }
    return 0;
}