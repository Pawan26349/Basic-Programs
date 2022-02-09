#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After the swapping : "<<endl;
    cout<<"Now the first number is : "<<a<<endl;
    cout<<"Now the second number is : "<<b<<endl;
    return main();
}
