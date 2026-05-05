#include<iostream>
using namespace std;
int main()
{
    int number=0,sum=0;
    do{
        sum += number;
        cout<<"enter a number:";
        cin>>number;

    }
    while(number>=0);
    cout<<"sum="<<sum<<endl;
    return 0;

    
}