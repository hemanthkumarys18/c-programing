#include<iostream> 
#include<iomanip>

using namespace std;

int main()

{
    float x=82.778309f;
    double a=7795.34290997654;
    long double aa= 8.9048856502345L;
    cout<<setprecision(15);

    //cout <<"float x="<<x<<endl;
    cout <<"double a="<<a<<endl;
    cout <<"long double aa="<<aa<<endl;

    return 0;
    //cout<<numeric_limits<long double>::digit10<<endl;  {edu limits da check madoke  }
}
