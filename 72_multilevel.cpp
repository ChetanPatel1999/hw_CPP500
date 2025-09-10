#include <iostream>
using namespace std;
class student
{
    int rno;

public:
    student(int a)
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
    marks(int r, int a, int b) : student(r)
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
    result(int r, int a, int b) : marks(r, a, b) {}
    void getResult()
    {
        per = (hindi + english) / 2.0;
        cout << "percentage : " << per << endl;
    }
};
int main()
{
    result s1(101, 50, 70);
    s1.getRno();
    s1.getMarks();
    s1.getResult();
    return 0;
}