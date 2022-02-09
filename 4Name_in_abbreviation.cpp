#include<iostream>
using namespace std;
int main()
{
    string firstname,middlename,lastname;
    int top=3,point=0;
    string arr[top];
    cout<<"Enter your first name : ";
    cin>>firstname;
    arr[0]=firstname;
    cout<<"Enter your second name : ";
    cin>>middlename;
    arr[1]=middlename;
    cout<<"Enter your last name : ";
    cin>>lastname;
    arr[2]=lastname;
    cout<<"The name after the abbreviation is : ";
    for(int i=0;i<top;i++)
    {
        if(i<=1)
        {
            cout<<arr[i][point]<<" . ";
        }
        else 
        {
            cout<<arr[i];
        }
    }
    cout<<endl;
    return main();
}