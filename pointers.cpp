#include <iostream>
using namespace std;

int main()
{
    // pointers is a data type which holds the address of other data types
    int a = 31;
    int *b = &a;
    /*
        here a is variable & b is another variable which shows address of a which has been stored in ram of your computer.
         
        & is address operator
        * is derefern ce operator
    
    */
    cout << b; //prints the address of the variable

    return 0;
}
