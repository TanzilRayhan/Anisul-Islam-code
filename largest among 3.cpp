#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z,large;
    cout<<"Enter three number: "<<endl;
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
    cout<<"X is Largest";
    }
     else if(y>x && y>z)
    {
    cout<<"Y is Largest";
    }
     else
    {
    cout<<"Z is Largest";
    }
    getch();
}
