#include<iostream>
using namespace std;
int main()

{
    char choice;
    do{
            float l,b,area=0;
            cout<<"enter length and breadth separated by a space:";
            cin>>l>>b;
            area=l*b;
            cout<<"The area is "<<area<<endl;
            cout<<"want to calculate another (Y/N)??";
            cin>>choice;

        } 
        while (choice == 'y' || choice == 'Y');
    cout<<"out of loop"<<endl;

return 0;

}