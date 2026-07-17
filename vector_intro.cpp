#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    // int value;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<"enter value:";
    //     cin>>value;
    //     numbers.push_back(value);
    // }
    
    
    cout<<"size of numbers:"<<numbers.size();
    cout<<"capacity of numbers="<<numbers.capacity();


}