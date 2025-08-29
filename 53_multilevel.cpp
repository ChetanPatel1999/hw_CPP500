#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    void setRno(int a)
    {
        rno = a;
    }
    void getRno()
    {
        cout << "student rno : " << rno << endl;
    }
};
class marks : public student
{
protected:
    int hindi;
    int english;

public:
    void setMarks(int a, int b)
    {
        hindi = a;
        english = b;
    }
    void getMarks()
    {
        cout << "hindi : " << hindi << endl;
        cout << "english : " << english << endl;
    }
};
class result : public marks
{
    float per;

public:
    void getResult()
    {
        per = (hindi + english) / 2.0;
        cout << "percentage : " << per << endl;
    }
};
int main()
{
    result s1;
    s1.setRno(101);
    s1.setMarks(67, 88);
    s1.getRno();
    s1.getMarks();
    s1.getResult();
    return 0;
}