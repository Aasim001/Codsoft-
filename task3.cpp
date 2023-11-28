#include<bits/stdc++.h>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
string name1;
string name2;
char token='x';
bool ties=false;;

void displayboard()
{
    cout << "      |      |      \n";
    cout << "  "<<board[0][0]<<"   |  "<<board[0][1]<<"   |  "<<board[0][2]<<"\n";
    cout << "______|______|______\n";
    cout << "      |      |      \n";
    cout << "  "<<board[1][0]<<"   |  " <<board[1][1]<< "   |  "<<board[1][2]<<"\n";
    cout << "______|______|______\n";
    cout << "      |      |      \n";
    cout << "  "<<board[2][0]<<"   |  " <<board[2][1]<< "   |  "<<board[2][2]<<"\n";
    cout << "      |      |      \n";
}

void play()
{
  int digit;
  if(token=='x')
  {
    cout<<name1<<" please enter = ";
    cin>>digit;
    }

  if(token=='0')
  {
    cout<<name2<<" please enter = ";
    cin>>digit;
    }

 if (digit >= 1 && digit <= 9)
 {
    row=(digit-1)/3;
    column=(digit-1)%3;
  }
 else{
    cout<<"Invalid move\n";
    }
 if(token=='x' && board[row][column]!='x' && board[row][column]!='0')
 {
    board[row][column]='x';
    token='0';
    }

 else if(token=='0' && board[row][column]!='x' && board[row][column]!='0')
 {
    board[row][column]='0';
    token='x';

}
 else{
    cout<<"there is no empty space\n";
    }

}

bool game()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i] )
        return true;
    }
     if(board[0][0]==board[1][1] && board[1][1]==board[2][2] || board[0][2]==board[1][1] && board[1][1]==board[2][0] )
     {
        return true;
     }
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]!='x' && board[i][j]!='0')
            {
                return false;
            }
        }
     }
     ties=true;
     return false;
}
int main()
{  
  cout<<"enter the name to play tic tac toe game :";
    cin>>name1;
    cout<<"enter the name to play tic tac toe game :";
    cin>>name2;
    cout<<name1<<" is player1 so he will play first"<<endl;
    cout<<name2<<" is player2 so he will play second"<<endl;

    while(!game())
    {
        displayboard();
        play();
        game();
    }  
    if(token == 'x' && ties == false)
    {
        cout<<name2<<"wins \n";
    } 
    else if(token == '0' && ties == false)
    {
        cout<<name1<<"wins \n";
    } 
    else{
        cout<<"its a draw \n";
    }

}