#include<bits/stdc++.h>
using namespace std;
char mtx[500][500];
int sol(/*vector<vector<char> > mtx,*/int n,int m,int i,int j,int point){
    if(point>=90)return 0;
    int ctr=INT_MIN;
    if(i+1<n&&mtx[i+1][j]==point+1)ctr=max(ctr,sol(n,m,i+1,j,point)+1);
    if(i+1<n&&j+1<m&&mtx[i+1][j+1]==point+1)ctr=max(ctr,sol(n,m,i+1,j+1,point)+1);
    if(i+1<n&&j-1>=0&&mtx[i+1][j-1]==point+1)ctr=max(ctr,sol(n,m,i+1,j-1,point)+1);
    if(j+1<m&&mtx[i][j+1]==point+1)ctr=max(ctr,sol(n,m,i,j+1,point)+1);
    if(i-1>=0&&mtx[i-1][j]==point+1)ctr=max(ctr,sol(n,m,i-1,j,point)+1);
    if(i-1>=0&&j+1<m&&mtx[i-1][j+1]==point+1)ctr=max(ctr,sol(n,m,i-1,j+1,point)+1);
    if(i-1>=0&&j-1>=0&&mtx[i-1][j-1]==point+1)ctr=max(ctr,sol(n,m,i-1,j-1,point)+1);
    if(j-1>=0&&mtx[i][j-1]==point+1)ctr=max(ctr,sol(n,m,i,j-1,point)+1);
    return ctr;
}
int soldriver(/*vector<vector<char> > mtx,*/int n,int m){
    int countr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            countr=max(countr,sol(n,m,i,j,mtx[i][j]));
    }
    return countr;
}
int main(){
    int n,m;
    cin>>n>>m;
    //vector<vector<char> >mtx(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mtx[i][j];
        }
    }
    cout<<soldriver(n,m);
}
