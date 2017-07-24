//
// Created by Akhilesh Rao on 28-Jan-17.
//
#include <bits/stdc++.h>
using namespace std;
sol(int *arr,int n,int i){
    if(i-2>=0&&i-3>=0)
    arr[i]=arr[i]+max(arr[i-2],arr[i-3]);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n>=2) {
        sol(arr, n, 0);
        cout << max(arr[n - 1], arr[n - 2]);
    }
    else if(n==1){
        cout<<max(arr[0],arr[1]);
    }
    else if(n==0){
        cout<<arr[0];
    }
}