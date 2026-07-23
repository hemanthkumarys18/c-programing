#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vect1= {1,2,3,4,5,6,7,8,9,10};
    vector<int> vect2= {11,12,13,14,15,16,17};
    vect1.swap(vect2);
    cout<<"vector 1 after swap is:";
    for(auto n:vect1)
    {
        cout<<n<<" ";
    }
    cout<<"\n vector 2 after swap is:";
    for(auto n:vect2)
    {
        cout<<n<<" ";
    }
    return 0;
}