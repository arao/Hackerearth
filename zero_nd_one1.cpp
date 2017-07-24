//
// Created by Akhilesh on 09-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int zero=0,one=0;
    int arr[n+1];
    for(int i=1;i<n+1;i++){
        int a;
        cin>>a;
        a==0?(zero++):(one++);
        arr[i]=(a==0?-1:1);
    }
    map<int,int> dp;
    int sum=0;
    int len=0;
    if(zero==0||one==0){
        len=-1;
    }
    else if(zero==one) {
        len=n;
    }
    else{
        for (int i = 1; i < n + 1; i++) {
            sum += arr[i];
            cout << "sum : " << sum << " i : " << i << endl;
            if (dp[sum] == 0) {
                dp[sum] = i;
            } else {
                len = max(len, i - dp[sum]);
            }
        }

    }
    cout<<len;
}
