#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // create ofstraem class object which name is write
    ofstream write;
    write.open("C:\\Users\\WIN\\Desktop\\fileOperation\\home.text");

    write << "hello i am chetan patel\n";
    write << "i am a teacher\n";

    // close method is used to close file
    write.close();

    return 0;
}