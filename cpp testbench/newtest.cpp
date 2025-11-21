#include <iostream>
using namespace std;

int main()
{
    //my variables
    int myNum = 4; //integer
    double myDoubleNum = 3.1415; //can be a very long decimal
    char myChar = '\\'; //character
    string myString = "Hello World!"; //string of characters
    bool myBoolean = false; //true or false, outputs are either true or false.
    //more variables
    const int q = 1, w = 2, e = 3;
    int r, t, y;
    // q = 3; //this will not work b/c q is already declared as a constant
    r = t = y = 4;

    // char a = 201;
    // std::cout << a;

    //this is where my main code starts
    cout << "my string is " << myString << " so that is it for this line!" << endl;
    cout << myChar << endl;
    cout << myBoolean << endl;
    cout << "hi?" << "\n" << endl;
    cout << myDoubleNum << endl;
    cout << myNum + myDoubleNum << endl;
    cout << q+w+e << endl;
    cout << r*t*y << "\n" << 4*4*4 << endl;
    return 0;
}
