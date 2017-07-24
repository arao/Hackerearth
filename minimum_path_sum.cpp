#include<bits/stdc++.h>
using namespace std;
int sol(vector< vector<int> >mtx,int i,int j,int n,int m){
    if(i==n&&j==m)return mtx[n][m];
    if(i+1<=n&&j+1<=m)return min((sol(mtx,i+1,j,n,m)+mtx[i][j]),sol(mtx,i,j+1,n,m)+mtx[i][j]);
    else if(i+1<=n&&!(j+1<=m)) return sol(mtx,i+1,j,n,m)+mtx[i][j];
    else if(!(i+1<=n)&&j+1<=m)return sol(mtx,i,j+1,n,m)+mtx[i][j];
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector< int > > mtx(n);
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a;
                cin>>a;
                mtx[i].push_back(a);
            }
    }
    n-=1;m-=1;
    cout<<sol(mtx,0,0,n,m);
}
