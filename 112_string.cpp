// example of string array
#include <iostream>
using namespace std;
int main()
{
    string citys[5] = {"indore", "ujjian", "ratlam", "dewas", "mhou"};

    int i;
    cout << "citys name are : " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << citys[i][2] << endl;
    }

    return 0;
}