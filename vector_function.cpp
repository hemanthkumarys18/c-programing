#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,0,45,65,77};
    // vector<int>:: iterator it;
    // for(it=v.begin();it != v.end(); it++)
    // {
    //     cout<<*it<<"  ";
    // }


    // reverse iterator in vector form


    vector<int> :: reverse_iterator rit;
    for(rit=v.rbegin();rit != v.rend(); rit++)
    {
        cout<<*rit<<"  ";
    }
    return 0;
}