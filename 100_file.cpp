#include <iostream>
#include <direct.h>
using namespace std;
int main()
{
    // create folder
    mkdir("C:\\Users\\WIN\\Desktop\\fileOperation\\fun");

    // delete a file
    rmdir("C:\\Users\\WIN\\Desktop\\fileOperation\\fun");
    return 0;
}