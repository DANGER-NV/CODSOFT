//calculator
#include<iostream>
using namespace std;
int main()
{
    int a,b,choice;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<endl;
    do
    {
       cout<<endl;
       cout<<"choices are"<<endl;
       cout<<"1.addition2.subtraction3.multiplication4.division5.exit"<<endl;
       cout<<"choice=";
       cin>>choice;
       if(choice<=5 && choice>0)
       {
        switch(choice)
        {
            case 1:
              cout<<"a+b="<<a+b;
              break;
            case 2:
              cout<<"a-b="<<a-b;
              break;
            case 3 :
              cout<<"a*b="<<a*b;
              break;
            case 4:
              cout<<"a/b="<<a/b;
              break;
            case 5:
              cout<<"operation done succesfully"<<endl;
              goto label;
            default:
              cout<<"program excuted succesfully!"<<endl;
        }
       }
       else
       {
        printf("wrong choice\n");
        printf("to countinue press 1 and to discontinue press 6\n");
        printf("1 or 6:");
        scanf("%d",&choice);
       }
    }while(choice!=6);
    label:
      cout<<"****exiting*****";
    return 0;
}
