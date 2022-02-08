#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float r,cicumference,area;
    cout<<"Enter the radius of the circle : ";
    cin>>r;
    cicumference = (2*22*r)/7;
    area=(22*pow(r,2))/7;
    cout<<"The circumference of the circle : "<<fixed<<setprecision(3)<<cicumference<<endl;
    cout<<"The area of the circle is : "<<fixed<<setprecision(3)<<area<<endl;
    return main();
}