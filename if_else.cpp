#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int age;
    // cout << "To Check if you can Drive or not:-";
    cout << "Enter your age :";
    cin >> age;
    if (age < 18)
    {
        cout << "You are kid, you can not drive" << endl;
    }
    
    else if (age==18)
    {
        cout << "Hurray !! You can drive" << endl;
    }
    
    else if (age > 75)
    {
        cout << "SORRY , You are very senior citizen , you can not drive" << endl;
    }
    else
    {
        cout << "Hurray !! You can drive" << endl;
    }

    return 0;
}