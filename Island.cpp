//
// Created by Akhilesh on 30-Dec-16.
//
#include <bits/stdc++.h>
using namespace std;
int __n,__m;
bool valid(int i,int j){
    if((i>=0&&i<__n)&&(j>=0&&j<__m))return true;
    return false;
}

void printvector(vector<vector<int> > &arr){
    cout<<endl<<endl;
    for(int i=0;i<arr.size();i++){
        for(auto a: arr[i]){
            cout<<a<<" ";
        }
        cout<<endl;
    }
}
void IslandEraser(vector<vector<int> > &arr,int i,int j){
    arr[i][j]=0;
    int imtx[]={-1,-1,-1,0,0,1,1,1};
    int jmtx[]={-1,0,1,-1,1,-1,0,1};
    for(int k=0;k<8;k++){
        if(valid(i+imtx[k],j+jmtx[k]))
            if(arr[i+imtx[k]][j+jmtx[k]]==1){
                IslandEraser(arr,i+imtx[k],j+jmtx[k]);
            }
    }


}
int findIsland(vector<vector<int> > &arr){
    int count=0;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            if(arr[i][j]==1){
                //printvector(arr);
                IslandEraser(arr,i,j);
                count++;
            }
        }
    }
    return count;
}
int main(){
    int n,m;
    cin>>n>>m;
    __n=n;
    __m=m;
    vector<vector<int> > arr(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(auto a : s ){
            arr[i].push_back((a=='0'?0:1));
        }
    }
    cout<<findIsland(arr)<<endl;
}