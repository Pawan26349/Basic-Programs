#include<iostream>
using namespace std;
int fact(int n)
{
    int factorial;
    if(n==1 || n==0)
    {
        return 1;
    }
    else 
    {
        factorial=n*fact(n-1);
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int result=fact(n);
    cout<<"The factorial of the entered number is : "<<result<<endl;
    return main();
}