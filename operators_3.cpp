#include<iostream>
using namespace std;

/*logical oprators */
int main()
{
    int x=7,y=12;
    if((x>5)&&(y<15))
    {
        cout<<"x+y:"<<(x+y)<<endl;
    }
    else if((x<5)||(y>15))
    {
        cout<<"x-y:"<<(x-y)<<endl;
    }
    else
    {
        cout<<"!x:"<<!x<<endl;
    }

    return 0;
}