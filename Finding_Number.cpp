//
// Created by Akhilesh on 28-Apr-17.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long z,n,m;
        cin>>z>>n>>m;
        long long point=min(n,m);
        long long point2=(point==n?m:n);
        long long result=0;
        for(long long i=1;i<=point&&(i*i)<=(z+1);i++){
            if(z%i==0){
                if(z/i<=point2){
                    if(i==z/i)
                        result++;
                    else
                        result+=2;
                }
            }
        }
        cout<<result<<endl;
    }
    return 0;
}

