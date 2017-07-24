#include<bits/stdc++.h>
using namespace std;
//count number of digit in a number
int counting(int a){
    int ctr=0;
    while(a){
        a/=10;
        ctr++;
    }
    return ctr;
}
//number selection algorithm
bool select(int a,int b){
    int ca=counting(a),cb=counting(b),ah=0,bh=0;//ah=a header
    ah=a/(pow(10,(int)log10(a)));
    bh=b/(pow(10,(int)log10(b)));
    //cout<<ah<<" "<<bh<<endl;
    while(true){
            if(cb==0)return true;
            if(ca==0)return false;
            if(ah<bh)return false;
            if(ah>bh)return true;
            if(ah==bh){
                a/=10;
                b/=10;
                ca--;
                cb--;
                ah=a/(pow(10,(int)log10(a)));
                bh=b/(pow(10,(int)log10(b)));
            }
    }
}

int main(){
    cout<<select(900,10);
}
