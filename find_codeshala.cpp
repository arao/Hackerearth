    #include<bits/stdc++.h>
    using namespace std;
    string s="CODESHALA";
    bool flag=false;
    int __n,__m;

    bool valid(int i,int j){
        if((i>=0&&i<__n)&&(j>=0&&j<__m))return true;
        return false;
    }
    void sol(vector<vector<pair<char,bool> > >mtx,int i,int j,int strindx){
        if(flag)return;
       // cout<<" i: "<<i<<" j: "<<j<<"  strindx:  "<<strindx<<endl;
        mtx[i][j].second=true;
        if(strindx==8)flag=true;
        int imtx[]={-1,-1,-1,0,0,1,1,1};
        int jmtx[]={-1,0,1,-1,1,-1,0,1};
        for(int k=0;k<8;k++){
            if(valid(i+imtx[k],j+jmtx[k]))
                if((mtx[i+imtx[k]][j+jmtx[k]].first==s[strindx+1])&&(!mtx[i+imtx[k]][j+jmtx[k]].second)){
                    sol(mtx,i+imtx[k],j+jmtx[k],strindx+1);
                }

        }
        mtx[i][j].second=false;
    }
    string soldriver(vector<vector<pair<char,bool> > > mtx){
        for(int i=0;i<mtx.size();i++){
            for(int j=0;j<mtx[i].size();j++) {
                //cout << " i : " << i << " j : " << j <<"  mtx i j : " << mtx[i][j].second <<endl;
                if (mtx[i][j].first == s[0]) {
                    if (flag)return "YES";
                    sol(mtx, i, j, 0);
                }
            }
        }
        return "NO";
    }
    int main(){
        int n,m;
        cin>>n>>m;
        __n=n;
        __m=m;
        vector<vector<pair<char,bool> > >mtx(n);
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(auto a: s){
                mtx[i].push_back(make_pair(a,false));
            }
        }
        cout<<soldriver(mtx);
    }
