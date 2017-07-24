//
// Created by Akhilesh on 09-Mar-17.
//
#include<bits/stdc++.h>
using namespace std;
int __n,__m;
vector< vector<int> >dp;
bool valid(int i,int j){
    if((i>=0&&i<__n)&&(j>=0&&j<__m))return true;
    return false;
}
int sol(vector<vector<pair<char,bool> > > &mtx,int i,int j){
    // cout<<" i: "<<i<<" j: "<<j<<"  strindx:  "<<strindx<<endl;
    if(dp[i][j]!=-1)return dp[i][j];
    mtx[i][j].second=true;
    dp[i][j]=1;
    int imtx[]={-1,-1,-1,0,0,1,1,1};
    int jmtx[]={-1,0,1,-1,1,-1,0,1};
    for(int k=0;k<8;k++){
        if(valid(i+imtx[k],j+jmtx[k]))
            if((mtx[i+imtx[k]][j+jmtx[k]].first==mtx[i][j].first+1)&&(!mtx[i+imtx[k]][j+jmtx[k]].second)){
                dp[i][j]=max(dp[i][j],sol(mtx,i+imtx[k],j+jmtx[k])+1);
            }

    }
    mtx[i][j].second=false;
    return dp[i][j];
}
int soldriver(vector<vector<pair<char,bool> > > &mtx){
    int sslen=-1;
    for(int i=0;i<mtx.size();i++){
        for(int j=0;j<mtx[i].size();j++) {
            //cout << " i : " << i << " j : " << j <<"  mtx i j : " << mtx[i][j].second <<endl;
            if(mtx[i][j].first=='A')
            sslen=max(sol(mtx, i, j),sslen);

        }
    }
    return sslen;
}
int main(){
    int n,m;
    cin>>n>>m;
    __n=n;
    __m=m;
    vector<vector<pair<char,bool> > >mtx(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vector<int> temp;
        for(auto a: s){
            temp.push_back(-1);
            mtx[i].push_back(make_pair(a,false));
        }
        dp.push_back(temp);
    }
    cout<<soldriver(mtx);
}

