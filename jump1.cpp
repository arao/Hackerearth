//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
int sol(int * arr,int n){
    bool visit[n];
    memset(visit,false, sizeof(visit));
    queue<pair<int,int> > q;
    visit[0]=true;
    q.push(make_pair(0,0));
    while(!q.empty()){
        //Assigne temp
        pair<int,int> temp;
        temp=q.front();
        q.pop();


        //Check termination Condition
        if(temp.first==(n)){
            return temp.second;
        }


        //first push
        if(temp.first+arr[temp.first]<=n&&temp.first+arr[temp.first]>=0){
            if(!visit[temp.first+arr[temp.first]]) {
                q.push(make_pair(temp.first + arr[temp.first], temp.second + 1));
                visit[temp.first + arr[temp.first]] = true;
            }
        }


        //Second push
        if(temp.first+1<=n&&!visit[temp.first+1]){
            q.push(make_pair(temp.first+1,temp.second+1));
            visit[temp.first+1]=true;

        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<sol(arr,n)<<endl;
    }
}
