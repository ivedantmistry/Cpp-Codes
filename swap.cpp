#include <iostream>
using namespace std;

void swappointer(int *a, int *b)
{
    int temp = *a; // store value of a to temp so address of a is now same for temp
    *a = *b;       // makes value of a = b
    *b = temp;     // makes value of b = temp (which was value of a)
}

int main()
{
    // changes address with help of pointer
    int x = 3;
    int y = 4;
    cout << " x is " << x << " and y is " << y << endl;
    swappointer(&x, &y);
    cout << " now x is " << x << " also  y is " << y << endl;

    return 0;
}