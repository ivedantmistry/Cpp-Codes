#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = 5;
    // arithmetic operators
    cout << "The value of a + b is " << a + b << endl;

                         cout << "The value of a - b is " << a - b << endl;

    cout << "The value of a * b is " << a * b << endl;

              cout << "The value of a / b is " << a / b << endl;

    cout << "The value of a % b is " << a % b << endl;

    cout << "The value of a++ is " << a++ << endl;

    cout << "The value of a++ is " << a++ << endl;

    cout << "The value of b++ is " << b++ << endl;

    cout << "The value of ++a is " << ++a << endl;

    cout << "The value of ++b is " << ++b << endl;

    // comparison operators
    cout << "The value of a==b is " << (a == b) << endl;

    cout << "The value of a>=b is " << (a >= b) << endl;

    cout << "The value of a<=b is " << (a <= b) << endl;

    cout << "The value of a!=b is " << (a != b) << endl;

    // logical operators
    // a = 2 , b = 3
    //true(1)
    //false(0)
    cout << "The value of (a<=b) && (a==b):" << ((a <= b) && (a == b)) << endl;
    cout << "The value of (a<=b) && (a==b):" << ((a <= b) || (a == b)) << endl;
    cout << "The value of (a<=b) && (a==b):" << ( !(a == b) ) << endl;
   

    return 0;
}