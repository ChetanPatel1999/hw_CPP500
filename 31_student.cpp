// wap to generate resultcard of student.
#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;

public:
    void setStudent(string s, int a, float p)
    {
        name = s;
        rno = a;
        per = p;
    }
    void resultcard()
    {
        cout << "Student result ...\n";
        cout << "-------------------------" << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student Pass" << endl;
        }
        else
        {
            cout << "student Fail" << endl;
        }
        cout << "-------------------------" << endl;
    }
};
int main()
{
    Student s1, s2, s3;
    s1.setStudent("ram", 101, 45);
    s2.setStudent("shyam", 102, 20);
    s3.setStudent("hariom", 103, 90);
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    return 0;
}