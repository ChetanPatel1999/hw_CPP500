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
    static void displayFinalResult()
    {
        cout << "Final result : " << endl;
        cout << "Total pass : " << totalpass << endl;
        cout << "Total fail : " << totalfail << endl;
    }
    static void displayTotalstd()
    {
        cout << "Total std : " << totalstd << endl;
    }
    static void classinfo()
    {
        cout << "-----------------------------------------" << endl;
        cout << "there are 5 method inside class" << endl;
        cout << "setdata : which set object data" << endl;
    }
    static void average(Student obj1, Student obj2)
    {
        float avg;
        avg = (obj1.per + obj2.per) / 2.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " = " << avg << endl;
    }
    static void average(Student obj1, Student obj2, Student obj3)
    {
        float avg;
        avg = (obj1.per + obj2.per + obj3.per) / 3.0;
        cout << "average of " << obj1.name << " and " << obj2.name << " and " << obj3.name << " = " << avg << endl;
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

    Student::displayFinalResult();
    Student::displayTotalstd();
    Student::classinfo();

    Student::average(s1, s2);
    Student::average(s3, s2);
    Student::average(s1, s2, s3);
    return 0;
}