#include <bits/stdc++.h>
using namespace std;
map<long long,long long>dp;
long long fib(long long n){
    if(n==1)return 0;
    if(n==2)return 1;
    if(dp[n]!=0) return dp[n];
    long long temp=fib(n-1)+fib(n-2);
    dp[n]=temp;
    return temp;
}
int main(){
    for(int i=1;i<1000000;i++)
    {long long n;
    //cin>>n;
    n=i;
    if(n<=0)return -1;
    cout<<"n is :"<<n<<"   "<<fib(n)<<"   ";
    }
}
