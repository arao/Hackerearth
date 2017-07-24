//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,mul,div,add,sub;
    bool flag;
    cin>>t;
    while(t--){
        flag=false;
        cin>>a>>b>>mul>>div>>add>>sub;
        int ctr=0,xsize=0;
        vector<int> arr(1000002,0);
        arr[a]=1;
        queue<int>q;
        q.push(a);
        while(!q.empty()){
            xsize=q.size();
            while(xsize--){
                int temp=q.front();
                // cout<<"temp:"<<temp<<endl;
                if(temp==b){
                    cout<<ctr<<endl;
                    flag=true;
                    break;
                }
                arr[temp]=1;
                q.pop();
                int nmul=temp*mul,ndiv=temp/div,nadd=temp+add,nsub=temp-sub;
                if(nmul>=2&&nmul<=1000000)if(arr[nmul]==0)q.push(nmul);
                if(ndiv>=2&&ndiv<=1000000)if(arr[ndiv]==0)q.push(ndiv);
                if(nadd>=2&&nadd<=1000000)if(arr[nadd]==0)q.push(nadd);
                if(nsub>=2&&nsub<=1000000)if(arr[nsub]==0)q.push(nsub);
            }
            ctr++;
            if(flag)break;
        }
        if(!flag)
            cout<<-1<<endl;
    }
}


