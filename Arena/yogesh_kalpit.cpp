//
// Created by Akhilesh on 17-07-2017.
//

/*3
abcEfg
!@6#2
123A*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int sc=0, lc=0, count =0;
        cin>>s;
        string::iterator it = s.begin();
        if(s.length()>100 || s.length()<1){
            cout<<("Invalid Input\n");
            continue;
        }
        while(it != s.end()){
            if (*it >=65 && *it <=90){
                lc++;
            }else if(*it >=97 && *it <=122){
                sc++;
            }
            it++;
        }
        if(sc == 0 && lc == 0){
            cout<<"Invalid Input";
        } else{
            cout<< min(sc,lc) ;
        }
        cout<<endl;
    }
}
