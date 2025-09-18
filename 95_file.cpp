#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    // file oipen using constructor
    ofstream write("facto.txt", _S_app);
    int i, fact = 1;
    int num;
    cout << "enter a num: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "factorial of " << num << " = " << fact << endl;
    write << "factorial of " << num << " = " << fact << endl;
    write.close();
    return 0;
}