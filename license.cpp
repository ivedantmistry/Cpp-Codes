#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age > 18)
    {
        /* code */
        cout << "You can drive" << endl;
    }
    else if (age == 18)
    {
        /* code */
        cout << "You can drive" << endl;
    }

    else
    {
        /* code */
        cout << "You can not drive" << endl;
    }

    return 0;
}
