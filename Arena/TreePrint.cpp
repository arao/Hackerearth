//
// Created by Akhilesh on 14-05-2017.
//
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        vector<int> left,right;
        queue<int> q;
        for(int i=0;i<log2(n)+1;i++){
            if(i==0){
                right.push_back(arr[1]);
                if(arr[2]!=0)q.push(arr[2]);
                if(arr[3]!=0)q.push(arr[3]);
                q.push(0);
            }
            else{
                while(true){
                    left.push_back(q.front());

                }
            }
        }
    }

}
