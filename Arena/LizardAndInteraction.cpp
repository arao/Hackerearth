//
// Created by Akhilesh on 10-05-2017.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int nlizard=0,minteraction=0;
        cin>>nlizard>>minteraction;
        int arr[nlizard+1];
        memset(arr,0,sizeof(arr));
        bool sol = false;
        while(minteraction--){
            int x, y;
            cin>>x>>y;
            if(arr[x]==0&&arr[y]==0) {
                arr[x] = 1;
                arr[y] = 2;
            }
            else if(arr[x]==0){
                arr[x]=(arr[y]==1?2:1);
            }
            else if(arr[y]==0){
                arr[y]=(arr[x]==1?2:1);
            }
            else if(arr[x]==arr[y]){
                sol=true;
            }

        }
        sol?(cout<<"Suspicious lizards found!\n"):(cout<<"No suspicious lizards found!\n");
        
    }
    return 0;
}

