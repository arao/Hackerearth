#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iterator>
using namespace std;
long long powerraiser(int  value)
{
    long long t;
    if(!value)
    {
        return 1;
    }
    t=10;
    for(int i=1;i<value;i++)
    {cout<<"value"<<t<<endl;
        t*=10;
    }

    return t;
}
long long itertolong(string s)
{
    return atoll(s.c_str());
}
int main()
{
    long int n;
    cin>>n;
    while(n--)
    {
        string number, t1;
        cin>>number;
        int a,b;
        long long temp=0,result=1,value=0,raiser=powerraiser(a)+b;
        cin>>a>>b;
        string::iterator t=number.begin();
        while(t!=number.end())
        {
            t1=*t;
            temp=itertolong(t1);
            cout<<"t1"<<*t<<" "<<temp<<endl;
            while(temp--&&t!=number.end())
            {
                cout<<*t<<"  "<<temp<<" "<<value<<endl;
                t1=*t;
                value=value*10+itertolong(t1);
                t++;
            }
            result=(result*value)%raiser;
            cout<<"end"<<result<<"  "<<value<<endl;
            value=0;
        }
        cout<<result<<endl;

    }
}
