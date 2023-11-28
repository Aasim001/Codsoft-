#include<bits/stdc++.h>
using namespace std;
int main()
{
  int num1,num2,ch,ans;
  string condition;

  cout<<"Enter the first number : ";
  cin>>num1;
  cout<<"Enter the second number : ";
  cin>>num2;

  do{
     cout<<"Choose the operation to perform"<<endl;
    cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl;
    cout<<"Enter your choice : ";
    cin>>ch;

  switch(ch){
    case 1:ans=num1+num2;
    cout<<"Addition of "<<num1<<" and "<<num2<<" is "<<ans;
    break;
    case 2:ans=num1-num2;
    cout<<"Subtraction of "<<num1<<" and "<<num2<<" is "<<ans;
    break;
    case 3:ans=num1*num2;
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is "<<ans;
    break;
    case 4:ans=num1/num2;
    cout<<"Division of "<<num1<<" and "<<num2<<" is "<<ans;
    break;
    default:cout<<"Wrong choice";
    }
    cout<<endl;
    cout<<"Enter yes to continue or no to stop : ";
    cin>>condition;

  
 }
  while(condition=="yes");
  
}