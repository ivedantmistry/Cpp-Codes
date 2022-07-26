#include <iostream>
#include <iomanip>

//manipulators
using namespace std;

int main()
{

    int a = 12, b = 203, c = 5000;

    cout << "The value of a is "<<setw(8) << a << endl;
    cout << "The value of b is "<<setw(8) << b << endl;
    cout << "The value of c is "<<setw(8) << c << endl;

    return 0;
}