#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"enter your choice:";
    cin>>ch;
    switch(ch)   /*float string not allowed to switch ch*/
    {
        case 1: /*case value is variables or enu or sky values */
        cout<<"i wanna know my balance.";
        break;

        case 2:
        cout<<"i wanna register a complaint.";
        break;

        case 8:
        cout<<"i wanna talh to custmoer care executive.";
        break;

        default:
        cout<<"enter a valid choice.";
        break;
    }
}