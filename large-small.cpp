#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Number:";
    cin>>num1;
    cout<<"Enter Number:";
    cin>>num2;

    if(num1>num2)
    {
    cout<<"Num1 is large"<<endl;
    cout<<"Num2 is small";
    }
    else
    {
     cout<<"Num2 is large"<<endl;
     cout<<"Num1 is small";
    }
    getch();
}
