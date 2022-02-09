#include<iostream>
using namespace std;
int main()
{
    int a;
    int *ptr;
    cout<<"Enter the value of a : ";
    cin>>a;
    *ptr=a;
    cout<<"The address of the a is : "<<&ptr<<endl;
    cout<<"The value of the a is : "<<*ptr;
    cout<<endl;
    return main();
}