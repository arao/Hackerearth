//
// Created by Akhilesh Rao on 04-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;

int sol(vector<vector<int> > board, int n, int destination, bool arr[]){
    queue<pair<int,int> > Q;
    Q.push(make_pair(n,0));
    arr[n]=true;

    //Queue loop started
    while(true) {
        pair<int ,int> temp;
        temp=Q.front();
        n=temp.first;
        Q.pop();

        //termination check
        if(n==destination)return temp.second;

        //loop
        for (int i = 0; i < board[n].size(); i++) {
            if (!arr[board[n][i]]) {
                arr[board[n][i]]=true;
                Q.push(make_pair(board[n][i],temp.second+1));
            }
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--) {
        //graph making
        int n, m;
        cin >> n >> m;
        vector<vector<int> > board(n + 1);
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            board[a].push_back(b);
            board[b].push_back(a);
        }
        bool arr[n + 1];
        memset(arr, false, sizeof(arr));


        //soln
        cout << sol(board, 1, n, arr) << endl;
    }
}


