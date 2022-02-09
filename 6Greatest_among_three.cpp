#include<iostream>
using namespace std;
int main()
{
    int a, b ,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if(a>=b)
    {
        if(a>=c)
        {
            cout<<"The greatest number among three is : "<<a<<endl;
        }
    }
    if(b>=a)
    {
        if(b>=c)
        {
            cout<<"The greatest number among three is : "<<b<<endl;
        }
    }
    if(c>=a)
    {
        if(c>=b)
        {
            cout<<"The greatest number among three is : "<<c<<endl;
        }
    }
    return main();
}