#include<iostream>
using namespace std;
int main()
{
    float arr[5],percentage;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the marks of the subject (out of 100) "<<i+1<<" : ";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        percentage+=arr[i];
    }
    percentage=(percentage*100)/500;
    cout<<"The percentage of the five marks are : "<<percentage<<endl;
    return main();
}