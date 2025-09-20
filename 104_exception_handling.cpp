// you can make multiple catch block for
// single try block
#include <iostream>
using namespace std;
int main()
{
    int x = 12;
    float f = 9.67;
    try
    {
        throw 67;
    }
    catch (float f)
    {
        cout << "float catch blcok is exicute" << endl;
    }
    catch (char f)
    {
        cout << "char catch blcok is exicute" << endl;
    }
    catch (double f)
    {
        cout << "double catch blcok is exicute" << endl;
    }
    catch (...) // default catch if throw instance is not match any catch block paramter so that time default block is exicute.
    {
        cout << "default catch blcok is exicute" << endl;
    }
    cout << "program run succefully";
    return 0;
}