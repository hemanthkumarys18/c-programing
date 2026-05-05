#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //int a[]={1,2,3};
    vector<int> num={1,2,3,4,5};
    for(int n:num)
    {
        cout<<n<<endl;
    }
    return 0;
}