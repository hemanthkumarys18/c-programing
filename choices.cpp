#include<iostream>
using namespace std;
int main()
{
    char choice;
    do{
        int a,b,sum=0,mul=0,div=0;
        cout<<"\n*******************"<<endl;
        cout<<"1.addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"Q.Quit"<<endl;
        cout<<"enter your choice:";
        cin>>choice;

if(choice == '1')
{
    cout<<"you chose 1...addition"<<endl;
    cout<<"enter two number separate by a space:";
    cin>>a>>b;
    sum=a+b;
    cout<<"addition is: "<<sum<<endl;
}

else if(choice == '2')
{
    cout<<"you chose 2...subtraction"<<endl;
    cout<<"enter two number separate by a space:";
    cin>>a>>b;
    sum=a-b;
    cout<<"subtraction is: "<<sum<<endl;
}
else if(choice == '3')
{
    cout<<"you chose 3...multiplication"<<endl;
    cout<<"enter two number separate by a space:";
    cin>>a>>b;
    sum=a*b;
    cout<<"multiplication is: "<<sum<<endl;
}
else if(choice == '4')
{
    cout<<"you chose 4...Division"<<endl;
    cout<<"enter two number separate by a space:";
    cin>>a>>b;
    sum=a/b;
    cout<<"Division is: "<<sum<<endl;
}
else if(choice == 'Q')
{
    cout<<"you chose Q...Quit"<<endl;
    cout<<"Good bye...:";
}
else{
    cout<<"wrong choice....Try again"<<endl;
}
    }while(choice != 'q' && choice != 'Q');
    
    return 0;
    
}