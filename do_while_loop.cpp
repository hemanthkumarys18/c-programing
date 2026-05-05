#include<iostream>
using namespace std;
int main()
{
    int numbers;
    do
    {
        cout<<"enter a number between 1 and 5:";
        cin>>numbers;

    }while(numbers<=1 || numbers>=5);
    cout<<"thanks "<<endl;

    return 0;

}