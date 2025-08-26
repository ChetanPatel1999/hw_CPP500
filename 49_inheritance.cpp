#include <iostream>
using namespace std;
class Student
{
    string name;
    int rno;

protected:
    float per;

public:
    void setStudent(string s, int a)
    {
        name = s;
        rno = a;
    }
    void displayStudent()
    {
        cout << "Student info : " << endl;
        cout << "student name : " << name << endl;
        cout << "student rno : " << rno << endl;
    }
    void Dispresult()
    {
        cout << "Percentage : " << per << endl;
        if (per > 33)
        {
            cout << "student pass" << endl;
        }
        else
        {
            cout << "student fail" << endl;
        }
    }
};
class MathStudent : public Student
{
    int math;
    int physics;
    int chemistry;

public:
    void setMark(int a, int b, int c)
    {
        math = a;
        physics = b;
        chemistry = c;
    }
    void displayMarks()
    {
        cout << "marks : " << endl;
        cout << "math : " << math << endl;
        cout << "physics : " << physics << endl;
        cout << "chemistry : " << chemistry << endl;
    }
    void result()
    {
        per = ((math + physics + chemistry) / 300.0) * 100;
        Dispresult();
    }
};

class CommerceStudent : public Student
{
    int account;
    int bussiness;
    int ip;

public:
    void setMark(int a, int b, int c)
    {
        account = a;
        bussiness = b;
        ip = c;
    }
    void displayMarks()
    {
        cout << "marks : " << endl;
        cout << "account : " << account << endl;
        cout << "bussiness : " << bussiness << endl;
        cout << "ip : " << ip << endl;
    }
    void result()
    {
        per = ((account + bussiness + ip) / 300.0) * 100;
        Dispresult();
    }
};
int main()
{
    MathStudent s1;
    s1.setStudent("ram sharma", 101);
    s1.setMark(40, 20, 80);
    s1.displayStudent();
    s1.displayMarks();
    s1.result();

    cout << "----------------------------------------------" << endl;

    CommerceStudent s2;
    s2.setStudent("shyam", 102);
    s2.setMark(34, 56, 89);
    s2.displayStudent();
    s2.displayMarks();
    s2.result();
    return 0;
}