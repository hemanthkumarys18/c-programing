#include<iostream>
using namespace std;
int main()
{
    wchar_t ch=L'ğ';
    wcout<<(int)ch<<endl;
    wcout<<sizeof(wchar_t)<<endl;

    return 0;
}