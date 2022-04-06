#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout << "Enter the range = ";
    cin >> n;

    for(i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    cout << "Sum is: " << sum;
    getch();
    return 0;
}
