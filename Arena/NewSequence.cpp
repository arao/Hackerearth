//
// Created by Akhilesh on 11-05-2017.
//
/*
 * Harold always boasted about his prowess with numbers. So one day Reese challenged him to a problem. He gave Harold two numbers X and Y and asked him to find out the Nth number of the series which began with X numbers of Y’s and the following elements are equal to the sum of the last X numbers in the series. Help Harold find the Nth number of the series.

Input:
The first line contains a number T , number of test cases.
The next T lines each contain 3 integers X, Y and N separated by single space.

Output:
For each test case print the Nth number of the sequence.

Constraints:
1<=T<=10^6
0 < N <= 50
0 < X < 50
0 <= Y< 3
 */
#include <bits/stdc++.h>
using namespace std;
int sol(){
    int x,y,n;
    cin>>x>>y>>n;
    int arr[n];
    for(int i=0, j=0;i<n;i++){
        if(i<x){
            arr[i]=y;
        }
        else if(i==x){
            arr[i]=x*y;
        }
        else{
            arr[i]=((arr[i-1]*2)-arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return arr[n-1];
}
int main(){
    int t;
    cin>>t;
    vector<int >vec;
    accumulate
    while(t--){
        cout<<endl<< sol()<<endl;
    }

}
