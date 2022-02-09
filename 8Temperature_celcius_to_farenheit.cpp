#include<iostream>
using namespace std;
int main()
{
    int choice ;
    float celcius,farenheit;
    cout<<"press 1 if you want to change the celcius to farenheit and press 2 for vice versa : ";
    cin>>choice ;
    if(choice == 1 )
    {
        cout<<"Enter the temperature in celcius : ";
        cin>>celcius;
        farenheit=(celcius*9/5)+32;
        cout<<"The farenheit temperature is : "<<farenheit<<endl;
    }
    if (choice==2)
    {
        cout<<"Enter the temperature in farenheit : ";
        cin>>farenheit;
        celcius=(farenheit-32)*5/9;
        cout<<"The celcius temperature is : "<<celcius<<endl;
    }
    else 
    {
        return main();
    }
    return main();
}