//
// Created by Akhilesh Rao on 04-Mar-17.
//
#include <bits/stdc++.h>
using namespace std;

void sol(vector<vector<int> > board,int n,bool arr[]){
    queue<int > Q;
    Q.push(n);
    arr[n]=true;



    //Queue loop started
    while(!Q.empty()) {
        n=Q.front();
        Q.pop();
        for (int i = 0; i < board[n].size(); i++) {
            if (!arr[board[n][i]]) {
                arr[board[n][i]]=true;
                Q.push(board[n][i]);
            }
        }
        cout<<n<<" ";
    }
}


int main(){
    //test case
    int t;
    cin>>t;
    while(t--) {
        //graph making
        int n, m;
        cin >> n >> m;
        vector<vector<int> > board(n+1);
        for (int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            board[a].push_back(b);
            board[b].push_back(a);
        }
        bool arr[n+1];
        memset(arr, false, sizeof(arr));


        //soln
        sol(board, 1, arr);
        cout<<endl;
    }
}
