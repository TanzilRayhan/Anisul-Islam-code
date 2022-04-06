#include<iostream>
#include<conio.h>
using namespace std;
void displayarray(int num[])
{
     for(int i=0;i<5;i++)
     {
     cout<<num[i]<<" ";
     }
}

int main()
{
    int arr[]= {2,6,5,4,10};
    displayarray(arr);
    getch();
}
