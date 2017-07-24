//
// Created by Akhilesh on 28-Feb-17.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        bool arr[n + 5][n + 5];
        memset(arr,false, sizeof(arr));

        //insering values
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            arr[x][y] = true;
            arr[y][x] = true;
        }
        //traversal
        queue<int> q;
        bool visit[n];
        memset(visit, false, sizeof(visit));
        //push first node
        q.push(1);
        visit[1] = true;
        //traversal loop
        while (!q.empty()) {
            int temp = q.front();
            q.pop();
            cout << temp << " ";
            for (int i = 1; i <= n; i++) {
                //cout<<q.size()<<endl;
                if (arr[temp][i]&& !visit[i]) {
                    q.push(i);
                    visit[i] = true;
                }
            }
        }
    }
}
