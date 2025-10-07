//tic-tac-toe game
#include<iostream>
using namespace std;

void display(char arr[3][3])
{
    cout<<"The current board is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

char check(char arr[3][3])
{
    for(int i=0;i<3;i++)
    {
        if(arr[i][0]!=' ' && arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2])
        {
            return arr[i][0];
        }
    }
    for(int j=0;j<3;j++)
    {
        if(arr[0][j]!=' ' && arr[0][j]==arr[1][j] && arr[1][j]==arr[2][j])
        {
            return arr[0][j];
        }
    }
    if(arr[0][0]!=' ' && arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
    {
        return arr[0][0];
    }
    if(arr[0][2]!=' ' && arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
    {
        return arr[0][2];
    }
    return ' ';
}

char see(char arr[3][3])
{
    char a = check(arr);
    if(a=='x')
    {
        return 'x';
    }
    if(a=='o')
    {
        return 'o';
    }
    return ' ';
}

int main()
{
    char a,b;
    int i,j,ch,x,y;
    char arr[3][3];
    for(x=0;x<3;x++)
        for(y=0;y<3;y++)
            arr[x][y] = ' ';

    cout<<"player1(x or o):";
    cin>>a;
    cout<<"player2(x or o):";
    cin>>b;
    if(b==a)
    {
        cout<<"already taken"<<endl;
        cout<<"player2(x or o):";
        cin>>b;
    }
    while(see(arr)!='x' && see(arr)!='o')
    {
        cout<<"player1 turn:"<<endl;
        cout<<"1.000 2.001 3.002"<<endl;
        cout<<"4.010 5.011 6.012"<<endl;
        cout<<"7.020 8.021 9.022"<<endl;
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                i=0;j=0;
                break;
            case 2:
                i=0;j=1;
                break;
            case 3:
                i=0;j=2;
                break;
            case 4:
                i=1;j=0;
                break;
            case 5:
                i=1;j=1;
                break;
            case 6:
                i=1;j=2;
                break;
            case 7:
                i=2;j=0;
                break;
            case 8:
                i=2;j=1;
                break;
            case 9:
                i=2;j=2;
                break;
            default:
                cout<<"wrong choice"<<endl;
                continue;
        }
        arr[i][j]=a;
        display(arr);
        if(see(arr)!=' ')
        {
            break;
        }
        cout<<"player2 turn:"<<endl;
        cout<<"1.000 2.001 3.002\n4.010 5.011 6.012\n7.020 8.021 9.022\n";
        cout<<"enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                i=0;j=0;
                break;
            case 2:
                i=0;j=1;
                break;
            case 3:
                i=0;j=2;
                break;
            case 4:
                i=1;j=0;
                break;
            case 5:
                i=1;j=1;
                break;
            case 6:
                i=1;j=2;
                break;
            case 7:
                i=2;j=0;
                break;
            case 8:
                i=2;j=1;
                break;
            case 9:
                i=2;j=2;
                break;
            default:
                cout<<"wrong choice"<<endl;
                continue;
        }
        arr[i][j]=b;
        display(arr);
    }
    char winner=see(arr);
    if(winner=='x' || winner=='o')
    {
        cout<<"Player with "<<winner<<" wins!"<<endl;
    }
    else
    {
        cout<<"It's a draw!"<<endl;
    }
    return 0;
}
