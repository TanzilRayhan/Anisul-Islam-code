#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double c,f,k;
    cout<<"Enter Celsius: ";
    cin>>c;
    f=1.8*c + 32;
    k=c+273;
    cout<<"Fahrenheit: "<<f<<endl;
    cout<<"Kelvin: "<<k<<endl;
    cout<<endl;
    cout<<"Enter Fahrenheit: ";
    cin>>f;
    c=(f-32)/1.8;
    k=c+273;
    cout<<"Celsius: "<<c<<endl;
    cout<<"Kelvin: "<<k<<endl;
    cout<<endl;
    cout<<"Enter kelvin: ";
    cin>>k;
    c=(f-32)/1.8;
    f=1.8*c + 32;
    cout<<"Fahrenheit: "<<f<<endl;
    cout<<"Celsius: "<<c<<endl;
    getch();
    return 0;
}
