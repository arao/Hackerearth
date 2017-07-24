//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
long sol(long  a,long b){
    long ctr=0;
    queue<long>q;
    bool visit[1000000]={false};
    q.push(a);
    q.push(LONG_MIN);
    while(!q.empty()){
        long temp=q.front();

        if(temp==b){
            return ctr;
        }
        q.pop();
        if(temp==LONG_MIN){
            ctr++;
            q.push(LONG_MIN);
            continue;
        }
        //cout<<"temp:"<<temp<<endl;
        visit[temp+500000]=true;
        if(temp*2<500000&&!visit[(temp*2)+500000]) {
            //cout<<"temp*2 :"<<temp*2<<endl;
            q.push(temp * 2);
        }
        if(temp-1>0&&!visit[(temp-1)+500000]) {
            //cout<<"temp-1 :"<<temp-1<<endl;
            q.push(temp - 1);
        }
    }
    return -1;
}
int main(){
    long a,b;
    cin>>a>>b;
    cout<<sol(a,b)<<endl;
}

