#include<iostream>
using namespace std;
int main()
{
    int size,choice;
    cout<<"1.int \n2.char \n3.float \n4.string \n5.double \n6.long long int \n";
    cout<<"Enter the choice from the given list : "<<endl;
    cin>>choice;
    if(choice==1)
    {
        size=sizeof(int);
        cout<<"The size of int data type is : "<<size<<endl;
    }
    if(choice==2)
    {
        size=sizeof(char);
        cout<<"The size of char data type is : "<<size<<endl;
    }
    if(choice==3)
    {
        size=sizeof(float);
        cout<<"The size of float data type is : "<<size<<endl;
    }
    if(choice==4)
    {
        size=sizeof(string);
        cout<<"The size of string data type is : "<<size<<endl;
    }
    if(choice==5)
    {
        size=sizeof(double);
        cout<<"The size of double data type is : "<<size<<endl;
    }
    if(choice==6)
    {
        size=sizeof(long long int);
        cout<<"The size of long long int data type is : "<<size<<endl;
    }
    else
    {
        return main();
    }
    return main();
}