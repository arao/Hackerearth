#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,temp;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        sum+=temp;
    }
    cout<<(n*(n-1)/2)-sum<<endl;
}
