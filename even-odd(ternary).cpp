#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    (num%2==0)? cout<<num<<" is Even" : cout<<num<<" is Odd";

    getch();
}
