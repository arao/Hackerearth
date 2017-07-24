//
// Created by Akhilesh on 12-Apr-17.
//
#include <bits/stdc++.h>

using namespace std;

long sol(int vec [],int n){
    if(n<3)
        return -1;
    sort(vec,vec+n);
    long result=1;
    int j=0;
   /* while(j<n){
        cout<<vec[j]<<" ";
        j++;
    }*/
    //cout<<vec[n-1]<<" "<<vec[0]<<endl;
    if(vec[n-1]>0){
        result *= vec[n-1];
        if(vec[n-2]*vec[n-3]<0||vec[0]*vec[1]>vec[n-2]*vec[n-3]){
            result *= vec[0]*vec[1];
        }
        else{
            result *= vec[n-2]*vec[n-3];
        }
    }
    else{
        result=vec[n-3]*vec[n-1]*vec[n-2];
    }
    return  result;
}
int main() {
    int n;
    cin>>n;
    int vec[n];
    for(int i=0;i<n;i++ ){
        cin>>vec[i];
    }
    cout<<sol(vec,n);
}
