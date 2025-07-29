#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;

    cout << "enter your name : ";
    //  cin >> name;
    getline(cin, name);   // take multiple world from user
    cout << "enter your age : ";
    cin >> age;
    cout << "enter your height : ";
    cin >> height;
    cout << "enter your gender : ";
    cin >> gender;

    cout << "person info :- " << endl;
    cout << "name of person :" << name << endl;
    cout << "age of person :" << age << endl;
    cout << "height of person :" << height << endl;
    cout << "gender of person :" << gender << endl;
    return 0;
}