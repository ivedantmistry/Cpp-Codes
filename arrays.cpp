#include <iostream>
using namespace std;

// array is a collection of variables of the same data type
int main()
{
    int marks[4] = {90, 91, 92, 93};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // using array and for loop to write the lines below(run code to see)
    //  for (int i = 0; i < 4; i++)
    //  {
    //      cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //  }

    // arrays and pointers
    int *p = marks;
    cout << "The value of marks[0] is " << *p<<endl;
    cout << "The value of marks[1] is " << *(p + 1)<<endl;
    cout << "The value of marks[2] is " << *(p + 2)<<endl;
    cout << "The value of marks[3] is " << *(p + 3)<<endl;

    return 0;
}
