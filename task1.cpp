#include<bits/stdc++.h>
using namespace std;
int main()
{
    int guessnum,chance;
    chance=4;

    srand(time(0));
    int num=1+rand()%10;

   cout<<"Gues the number between (0-9)"<<endl;
   cout<<"You have only 4 chance to guess the right number"<<endl;

   for(int i=0;i<4;i++){
      cout<<"enter the number : ";
      cin>>guessnum;

       if(num==guessnum)
    {
        cout<<"congrats! you have guessed the right number"<<endl;
        break;
    }
    else if(num<guessnum)
    {
        cout<<"wrong guess! you have entered bigger number"<<endl;
    }
    else{
        cout<<"wrong guess! you have entered lower number"<<endl;   
    }
    chance--;
    cout<<"you have only "<<chance<<" chance"<<endl;

    if(chance==0)
    {
        cout<<"sorry play again";
    }

   }
    
}


