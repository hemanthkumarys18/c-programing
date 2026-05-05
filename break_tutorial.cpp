/* #include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==7)
        {
            break;
        }
        cout<<i<<"\n";
    }
    return 0;
} */

//break in infinite loop


/* #include<iostream>
using namespace std;
int main()
{
    int num,total=0;
    while(1)
    {
        cout<<"enter a number:";
        cin>>num;
        if(num<0)
        {
            break;
        }
        total += num;

    }
    cout<<"Total is: "<<total;
    return 0;
}
    */

    //break in nested loop
    #include<iostream>
    using namespace std;
    int main()
    {
         for(int i=1;i<3;i++)
         {
            for(int j=1;j<5;j++)
            {
                if(j==3)
                {
                    break;
                }
                cout<<"i="<<i<<"\t"<<"j="<<j<<endl;
            }
         }
         return 0;
    }