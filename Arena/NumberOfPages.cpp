//
// Created by Akhilesh on 11-05-2017.
//

#include <iostream>
using namespace std;

int sol(int n){
    if(n%2)return -1;
    if(n<10)return -1;
    int tens=0,twls=0,temp;

    tens=n/10;
    temp=n%10;
    temp/=2;

    if(temp>tens)return -1;

    twls=temp;
    tens-=temp;

    temp=tens/6;
    tens=tens%6;
    twls+=(temp*5);
    cout<<"tens "<<tens<<"  twels "<<twls<<endl;
    return tens+twls;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<sol(n)<<endl;
    }

}

