#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int num[4]={2,7,11,15};
    int target=19;
    for(i=0;i<4;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(target==(num[i]+num[j]))
            {
                cout<<i<<" "<<j<<endl;   
            }
        }
            
    }
    cout<<"no such two number exists:";
    return 0;
}