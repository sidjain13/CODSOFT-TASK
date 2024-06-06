#include<iostream>
using namespace std;

void boarddisplay(char arr[3][3])
{    
    cout<<"\t\t\t\t"<<"  "<<arr[0][0]<<"  |"<<"  "<<arr[0][1]<<"  |"<<"  "<<arr[0][2] <<"\n";
    cout<<"\t\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t\t"<<"  "<<arr[1][0]<<"  |"<<"  "<<arr[1][1]<<"  |"<<"  "<<arr[1][2] <<"\n";
    cout<<"\t\t\t\t_____|_____|_____\n";
    cout<<"\t\t\t\t"<<"  "<<arr[2][0]<<"  |"<<"  "<<arr[2][1]<<"  |"<<"  "<<arr[2][2] <<"\n";
    cout<<"\t\t\t\t     |     |     \n";
    
}
void playerturn(char arr[3][3],int &draw,char &turn)
{
    int choice,row=-1,column=-1;
    if(turn=='X')
    {
        cout<<"Player 1 turn : ";
    }
    if(turn=='O')
    {
        cout<<"Player 2 turn : ";
    }
    cin>>choice;

    if(choice>9){
        cout<<"Invalid Move\n\n";
        return ;
    }
    
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move\n\n";
            // playerturn(arr,draw,turn);
    }

    // if(row==-1 && column==-1){
    //     return ;
    // }

    if(turn=='X' && arr[row][column]!='X' && arr[row][column]!='O')
    {
        arr[row][column]='X';
        turn='O';
     
    }
    
    else if(turn=='O' && arr[row][column]!='X' && arr[row][column]!='O')
    {
        arr[row][column]='O';
        turn='X';
    }
    
    else
    {
        cout<<"Box is filled please try again \n\n";
        playerturn(arr,draw,turn);
    }
    boarddisplay(arr);
    draw++;
}

void winplayer(char arr[3][3],int &win)
{
    int i;
    for(i=0;i<3;i++)
    {
        
        // matching vertical column wise 
        if(arr[0][i]==arr[1][i]&&arr[0][i]==arr[2][i])
        {
            win=1;
        }


        // matching horizontal row wise 
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2])
        {
            win=1;
        }

        // primary diagonal matching 
        if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2])
        {
            win=1;
        }

        // secondary diagonal matching 
        if(arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0])
        {
            win=1;
        }
        
    }
}


void main_function(){
    char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
    int draw=0;
    char turn='X';
    int win;

    
    
    cout<<"\n\nX for Player 1 \n";
    cout<<"O for Player 2\n\n";
    
    boarddisplay (arr);
    while(true)
    {
        
        playerturn(arr,draw,turn);
        
        winplayer(arr,win);
        if (win==1)
        {
            break;
        }
        if(draw==9)
        {
            break;
        }
        
    }

    if(turn=='O' && draw!=9)
    {
        cout<<"Player 1 win the game\n";
    }
    else if(turn=='X' && draw!=9)
    {
        cout<<"Player 2 win the game\n";
    }
    else if(draw==9)
    {
        cout<<"Game is draw";
    }
}

int main()
{
    cout<<"\n\n\t\t\t\tWELCOME TO \n";
    cout<<"\t\t\t\tTIC TAC TOE \n";
    cout<<"\t\t\t\t___________\n\n";


    int choice;

    do{
        main_function();
        cout<<"\n\nIf you want to play another game then press 1 otherwise press any no. : ";
        cin>>choice;

    }while(choice==1);


    cout<<"\n\n\nThank You For Playing\n\n\n";
}
