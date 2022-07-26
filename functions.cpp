// #include <iostream>//function in C++
// using namespace std;

// int sum(int a,int b){
//     int c= (a+b)/2;
//     return c;
//     }
// int main()
// {
//     int numb1,numb2;
//     cout<<"Enter number 1: ";
//     cin>>numb1;
//     cout<<"Enter number 2: ";
//     cin>>numb2;
//     cout <<sum(numb1,numb2);

//     return 0;
// }

#include<iostream>
using namespace std; //function prototyping

int sum(int ,int );
int main()
            {
    int abc=10;
    int xyz=31;
cout<<"enter number 1"<<endl;
cin>>abc;
cout<<"enter number 2"<<endl;
cin>>xyz;

    cout<<"Answer is "<<sum(abc,xyz);
return 0;
}
    int sum(int b,int c){
        int x=b*c;
        return x;
    }

