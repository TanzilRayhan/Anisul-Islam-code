#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    //string copy & length

    /*char name1 [] = "Tanzil";
    char name2[10];

    int len = strlen(name1);
    cout<<"Length of String = "<<len<<endl;
    strcpy(name2,name1);
    cout<<"Name2 = "<<name2;*/

    //string concatination(adding 2 str)

    /*char name1 [] = "Tanzil";
    char name2 [] = " Rayhan";

    strcat(name1,name2);
    cout<<name1;*/

    //string uppercase & lowercase

    /*char name1[] ="Tanzil";
    char name2[] ="Rayhan";
    strupr(name1);
    strlwr(name2);
    cout<<name1<<endl<<name2;*/

    //string compare
    char name1[] ="Tanzil";
    char name2[] ="Tanzil";

    int value = strcmp(name1,name2);
    if (value==0)
        cout<<"Strings are equal";
    else
    {
     cout<<"Strings are not equal";
    }
    getch();
}
