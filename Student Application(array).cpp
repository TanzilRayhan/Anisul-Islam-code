#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter number of Students: ";
    cin>>n;

    int student[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Marks for Student "<<i+1 <<" = ";
        cin>>student[i];
        sum = sum + student[i];
    }
    cout<<endl;
    cout<<"Total Marks: "<<sum<<endl;

    float avg = (float)sum/n;
    cout<<"Average: "<<avg<<endl;

    int max = student[0];
    int min = student[0];

    for(int i=1; i<n; i++)
    {
        if(max<student[i])
        {
            max = student[i];
        }
        if(min>student[i])
        {
            min = student[i];
        }
    }
    cout<<"Maximum Marks = "<<max<<endl;
    cout<<"Minimum Marks = "<<min<<endl;

    getch();
}
