//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include<bits/stdc++.h>
using namespace std;

string sol(long long n){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    bool visit[n];
    memset(visit,false, sizeof(visit));
    queue<pair<int,string> > q;
    if(1%n==0)return "1";
    q.push(make_pair(1,"1"));
    while(!q.empty()){
        assert(q.size()<=n+10);
        pair<int,string>temp;
        temp=q.front();
        q.pop();

        int rem=temp.first;
        string st=temp.second;
        //cout<<st<<endl;

        //multiply by 10

        rem=(rem%n*10%n)%n;
        if(rem==0)return st+"0";
        if(visit[rem]==false)
        q.push(make_pair(rem,st+"0"));


        //multiply by 11

        rem=(rem%n+1%n)%n;
        if(rem==0)return st+"1";
        if(visit[rem]==false)
        q.push(make_pair(rem,st+"1"));
    }
    return "-10";
}
int main(){
    long long n,t;
    cin>>t;
    while(t--){
        cin>>n;
        //cout<<"n is: "<<t<<" with sol: "<<sol(t)<<endl;
        cout<<sol(n)<<endl;
    }
}

