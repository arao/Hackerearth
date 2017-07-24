//
// Created by Akhilesh on 09-Mar-17.
//
#include<bits/stdc++.h>
using namespace std;
bool x=false;
void dfsloop(vector< vector<int > > &vec,bool * visit,int point,int parent){
    if(visit[point]||x){x=true;return;}
    visit[point]=true;
    for(unsigned int i=0;i<vec[point].size();i++)
    {
        if(vec[point][i]==parent) continue;
        dfsloop(vec,visit,vec[point][i],point);
    }
    return;

}

int main(){
    int n,m;
    cin>>n>>m;
    vector< vector<int> >vec(n+1);
    bool visit[n+1];
    memset(visit,false, sizeof(visit));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        vec[x-1].push_back(y-1);
        vec[y-1].push_back(x-1);
    }
    dfsloop(vec,visit,1,-1);
    x?(cout<<"YES"<<endl):(cout<<"NO"<<endl);


}
