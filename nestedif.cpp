#include<iostream>
using namespace std;
int main()
{
    int money,patner_age;
    cout<<"Enter the money:";
    cin>>money;

    if(money>1000)
    {
        cout<<"enter partner age:";
        cin>>patner_age;
        if(patner_age>21)
        {
            cout<<"lets have wine";
        }
        else{
            cout<<"lets have coffe in starbucks";
        }
    }
    else{
        if(money>500)
        {
            cout<<"coffee in udupi";
        }
        else{
            cout<<"coffee in normal shop"; 
        }

    }
    cout<<"lets go hostel";
    return 0;
}