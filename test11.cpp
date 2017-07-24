//
// Created by Akhilesh Rao on 26-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
string binary(int a, int n){
    string s;
    unsigned int mask=pow(2.0,double(n-1));
    while(mask>0){
        s+=(mask&a?"1":"0");
        mask=mask>>1;
    }
    return s;
}
int count_ones(int n){
    int coutn;
    while(n>0){
        n=n&(n-1);
        cout<<n<<endl;
        coutn++;
    }
    return coutn;
}
bool prime(long a){
    for(int i=2;i<(a/2)+1;i++){
        if(a%i==0)return false;
    }
    return  true;
}
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    vector<int>::reverse_iterator it=vec.rbegin();
    for(;it!=vec.rend();it++){
        cout<<*it<<" ";
    }
}