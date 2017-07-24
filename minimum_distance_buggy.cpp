//
// Created by Akhilesh Rao on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
queue<pair<int,int> > q;


int sol(vector<vector<int> > board,int n){
    bool visit[n];
    memset(visit,false, sizeof(visit));
    for(unsigned int i=0;i<board[0].size();i++){
        q.push(make_pair(board[0][i],1));
        visit[board[0][i]]=true;
    }
    while(true){
        pair<int ,int> temp;
        //cout<<"temp :"<<temp.first<<"  "<<temp.second<<endl;
        temp=q.front();
        q.pop();
        if(temp.first==n-1)return temp.second;
        for(int i=0;i<board[temp.first][i];i++){
            if(visit[board[temp.first][i]]==true)continue;
            q.push(make_pair(board[temp.first][i],temp.second+1));
            visit[board[temp.first][i]]=true;
        }
    }
}



int main(){
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > board(n);
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            board[x - 1].push_back(y - 1);
            board[y - 1].push_back(x - 1);
        }
        cout << sol(board, n) << endl;
    }
}
