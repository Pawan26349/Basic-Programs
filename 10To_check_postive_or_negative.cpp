#include<iostream>
using namespace std;
int main()
{
    float number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number<0)
    {
        cout<<"The number is negative .\n";
    }
    else if(number==0)
    {
        cout<<"The number is 0 nor positive or nor negative."<<endl;
    }
    else if(number>0)
    {
        cout<<"The number is positive .\n";
    }
    else 
    {
        return main();
    }
    return main();
}