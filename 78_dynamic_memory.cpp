// new key word is used to alloacte dynamic memory
// delete keyword is used to delete dynamic memory.
#include <iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    *ptr = 25;
    int *ptr1 = new int(89);
    float *ptr3 = new float;
    float *ptr4 = new float(8.12);
    *ptr3 = 5.67;

    cout << "integer value = " << *ptr << endl;
    cout << "integer value = " << *ptr1 << endl;
    cout << "integer value = " << *ptr3 << endl;
    cout << "integer value = " << *ptr4 << endl;
    delete ptr;
    delete ptr1;
    return 0;
}