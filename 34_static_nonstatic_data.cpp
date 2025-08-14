// wap to generate resultcard of student.
#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;
    float per;
    static int totalpass;
    static int totalfail;
    static int totalstd;
    static string collegename;

public:
    void setStudent(string s, int a, float p)
    {
        name = s;
        rno = a;
        per = p;
        totalstd++;
    }
    void resultcard()
    {
        cout << "Student result ...\n";
        cout << "Collage Name :" << collegename << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
        cout << "student per : " << per << endl;
        if (per >= 33)
        {
            cout << "student Pass" << endl;
            totalpass++;
        }
        else
        {
            cout << "student Fail" << endl;
            totalfail++;
        }
        cout << "-------------------------" << endl;
    }
    void displayFinalResult()
    {
        cout << "Final result : " << endl;
        cout << "Total pass : " << totalpass << endl;
        cout << "Total fail : " << totalfail << endl;
    }
    void displayTotalstd()
    {
        cout << "Total std : " << totalstd << endl;
    }
};
int Student::totalpass = 0;
int Student::totalfail = 0;
int Student::totalstd = 0;
string Student::collegename = "Rampal collage";
int main()
{
    Student s1, s2, s3, s4;
    s1.setStudent("ram", 101, 45);
    s2.setStudent("shyam", 102, 20);
    s3.setStudent("hariom", 103, 90);
    s4.setStudent("yashraj", 104, 38);
    s1.resultcard();
    s2.resultcard();
    s3.resultcard();
    s4.resultcard();

    s1.displayFinalResult();
    s1.displayTotalstd();
    return 0;
}