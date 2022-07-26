#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"You are 18!"<<endl;
        // break;
    case 28:
        cout<<"You are 28!"<<endl;
        // break;
    case 33:
        cout<<"You are 33!"<<endl;
        // break;
    
    default:
    cout<<"No Special Cases"<<endl;
        break;
    }







    return 0;
}
