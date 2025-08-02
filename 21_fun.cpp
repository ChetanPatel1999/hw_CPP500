#include <iostream>
using namespace std;
void display(); // declaration of function
void fun()
{
    display();
    cout << "hello i am fun function" << endl;
}
void display()
{
    cout << "hello i am display function" << endl;
}
int main()
{
    cout << "hello i am main function" << endl;
    fun();
    cout << "end main function" << endl;
    return 0;
}