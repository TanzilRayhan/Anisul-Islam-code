#include<iostream>
#include<conio.h>
using namespace std;
void square(int n)
{
    int result = n*n;
    cout<<"square of "<<n<<" = "<<result<<endl;
}
int main()
{
    square(5);
    square(10);
    square(3);

    getch();
}
