//
// Created by Akhilesh on 11-05-2017.
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    int result=0;
    while(n--){
        int a;
        cin>>a;
        if(a%2==0)result+=a;
        else{
            vec.push_back(a);
        }
    }
    if(vec.size()) {
        sort(vec.begin(), vec.end());
        int sum = accumulate(vec.begin(), vec.end(), 0);
        if (vec.size() % 2 == 0) {
            sum -= vec[0];
        }
        result += sum;
    }
    result%2?(cout<<result<<endl):(cout<<":(\n");

    return 0;
}

