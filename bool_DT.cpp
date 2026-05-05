#include<iostream>
using namespace std;

int main()
{
    /*bool b=false;
    bool a=true;
    cout<<b<<endl;
    cout<<a<<endl;*/
   
   
   /* void *ptr;
    int x=18;
    ptr=&x;
    cout<<*(int*)ptr<<endl;*/
   
    int x=18;
    float y=77.8;
    float z=true+x+false+y;
    
    cout<<z<<endl;
    cout<<sizeof(bool);  
    
    if((x>y)==false) 
    {
        cout<<"x is greater"<<endl;
    }
    else
    {
        cout<<"y is greater"<<endl; 
    }





    return 0;
}