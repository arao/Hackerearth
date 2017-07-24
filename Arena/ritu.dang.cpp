//
// Created by Akhilesh on 10-05-2017.
//

//TLE And MEMORY
#include <bits/stdc++.h>
using namespace std;
long long int arr[10000000000];
long long int sol(long long int n){
    if(n==1)return 1;
    if(n==2)return 6;
    return (((sol(n-1)+2)*2)-sol(n-2))%1000000007;
    return arr[n];
}

int main()
{
    memset(arr,0,sizeof(arr));
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<sol(n);
    }
    return 0;
}

