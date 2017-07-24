//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;

    int arr[n];
    cin>>arr[0];
    arr[0]=ceil(log2(arr[0]));
    for(int i=1;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i-1]+ceil(log2(arr[0]));
    }

    while(q--){
        int l,r;
        cin>>l>>r;
        int sol=0;
        if(l==1)sol=arr[r-1];
        else sol=arr[r-1]-arr[l-2];
        cout<<(sol%2==1?"Mishki":"Hacker")<<endl;
    }
}
