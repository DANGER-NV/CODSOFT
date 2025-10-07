//Number Guessing Game
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int y,a;
    a=rand()%100+1;
    cout<<"enter your guess:";
    cin>>y;
    while(y!=a)
    {
        if(y>a)
        {
            cout<<"enter smaller number:";
            cin>>y;
        }
        else if(y<a)
        {
            cout<<"enter larger number:";
            cin>>y;
        }
    }
    cout<<"congratulations! you guessed the number"<<endl;
    return 0;
}