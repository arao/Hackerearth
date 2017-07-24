//
// Created by Akhilesh Rao on 28-Jan-17.
//
#include <bits/stdc++.h>
using namespace std;
int arr[10][10];
int dp[10][10];
int sol(int n,int m){
    for(int i=1;i<=n;i++){
        arr[0][i]+=arr[0][i-1];
    }
    for(int i=1;i<=m;i++){
        arr[i][0]+=arr[i-1][0];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            arr[i][j]=arr[i][j]+max(arr[i-1][j],arr[i][j-1]);
        }
    }
    return arr[n][m];
}
int main(){
    int n,m;
    cin>>n>>m;
    //vector <vector<int> > arr;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //vector< vector<int> >dp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j]=-1;
        }
    }
    cout<<sol(n-1,m-1);
}
