#include <iostream>
using namespace std;

// int c=100; //global varibale can't be directly use , we need to use it by scope resolution operator :: 
int main()
{

    // int a=10, b=20,c;
    // cout << "Enter value of a:"<<endl;
    // cin >> a;
    // cout << "Enter value of b:"<<endl;
    // cin >> b;

    // c = a + b;
    // cout<<"The sum of a & b is:"<<c<<endl;

    // cout<<"Value of Global variable c is :"<<::c<<endl;


    // float pi =3.14f;
    // cout<<pi;

    int a=1000;
    // string myname = "chetan";
    // string syname = "shubham";
     int & b=a;
     cout<<a<<endl;
    //  cout<<b<<endl;
    //  cout<<myname<<endl;
    //  cout<<syname;



    return 0;
}