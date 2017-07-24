//
// Created by Akhilesh Rao on 28-Jan-17.
//
#include <bits/stdc++.h>
using namespace std;
int arr[10][10];
int dp[10][10];
int sol(int n,int m, int i,int j){
    if(i==n&&j==m){
        return arr[i][j];
    }
    int maxi=INT_MIN;
    if(i+1<=n){
        if(dp[i][j]!=-1){
            maxi=max(maxi,dp[i+1][j]+arr[i][j]);
        }
        else
        maxi=max(maxi,sol(i+1,j,n,m)+arr[i][j]);
    }
    if(j+1<=m){
        if(dp[i][j+1]){
            maxi=max(maxi,dp[i][j+1]);
        }
        maxi=max(maxi,sol(i,j+1,n,m));
    }
    dp[i][j]=maxi;
    return maxi;
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
    cout<<sol(n-1,m-1,0,0);
}