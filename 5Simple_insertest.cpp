#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter the principal amount  : ";
    cin>>p;
    cout<<"Enter the rate of insertest(in %) : ";
    cin>>r;
    cout<<"Enter the time period : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"The simple interest is : "<<si<<endl;
    return main();
}