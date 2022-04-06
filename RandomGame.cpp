#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
   while(1)
   {
        int guess, random;

    cout<<" Choose number between 1 to 5 : ";
    cin>>guess;

    random = rand()%5 +1;

    if(random==guess)
    {
    cout<<"You have won"<<endl<<endl;
    }
    else
    {
     cout<<"You lose"<<endl;
     cout<<"Random number was: "<<random<<endl<<endl;
    }
   }

    getch();
}
