#include<iostream>
using namespace std;

int main()
{
    int money;
    cout<<"how much you have:";
    cin>>money;
    if(money>=1000)
    {
        cout<<"Money i have:"<<money<<endl;
        cout<<"Lets have coffe in starbucks"<<endl;
    }
    else if(money>750)
    {
        cout<<"Money i have:"<<money<<endl;
        cout<<"Lets have coffe in udupi hotel"<<endl;
    }
    else if(money>570)
     {
        cout<<"money I have:"<<money<<endl;
        cout<<"Lets have coffee in normal shop"<<endl;
     }
     else if(money>150)
     {
        cout<<"Lets buy sachets and make coffee at home"<<endl;
     }
     else;
     {
        cout<<"lets have tea"<<endl;
     }
     
    return 0;
}
