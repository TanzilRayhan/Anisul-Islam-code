#include<iostream>
#include<conio.h>
using namespace std;

void addition(int a, int b)
{
    int sum = a+b;
    cout<<"Sum= "<<sum<<endl;
}
void subtraction(int a, int b)
{
    int sum = a-b;
    cout<<"Sum= "<<sum<<endl;
}
void multiplication(int a, int b)
{
    int sum = a*b;
    cout<<"Sum= "<<sum<<endl;
}
void division(int a, int b)
{
    int sum = (float)a/b;
    cout<<"Sum= "<<sum<<endl;
}


int main()
{
    addition(10,5);
    subtraction(10,5);
    multiplication(10,5);
    division(10,5);

    getch();
}

