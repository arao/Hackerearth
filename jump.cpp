#include <bits/stdc++.h>
using namespace std;
int sol(int * arr,int n){
    int ctr=0;
    bool visit[n]={false};
    queue<int>q;
    q.push(0);
    q.push(-10);
    while(!q.empty()){
        //cout<<"loop"<<endl;
        int temp=q.front();
        cout<<"temp:"<<temp<<"arr temp:"<<arr[temp]<<endl;
        if(temp==n-1){
            return ctr+1;
        }
        q.pop();
        if(temp==-10){
            ctr++;
            q.push(-10);
            continue;
        }
        visit[temp]=true;
        if(temp+1<n&&!visit[temp]){
             int nt=temp+1;
            cout<<"push 1 "<<nt<<endl;
            q.push(temp+1);
        }
        if(0<=temp+arr[temp]<n&&!visit[temp]){
            int nt=temp+arr[temp];
            cout<<"push 2 "<<nt<<endl;
            q.push(temp+arr[temp]);
        }

    }
    return -1;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i]; //cout<<"loop ends";
        }
        cout<<sol(arr,n)<<endl;
    }
}

