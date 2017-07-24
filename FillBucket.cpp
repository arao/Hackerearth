    //
    // Created by Akhilesh on 05-06-2017.
    // BUGGYyyyyyyyyyyyyyyyyyyyyyyyyyyy
    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        char arr[n];
        int arrFw[n],arrBw[n];
        int sol=-1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arrFw[i]=arrBw[i]=-1;
        }
        for(int i=0;i<n;i++) {
            if (arr[i] == 'F'){
                arrFw[i] = 0;
            }
            else if(arr[i]=='E'){
                if(i>0&&arrFw[i-1]>=0){
                    arrFw[i]=arrFw[i-1]+1;
                    sol=max(sol,arrFw[i]);
                }
            }
        }
        for(int i=n-1;i>=0;i--) {
            if (arr[i] == 'F'){
                arrBw[i] = 0;
            }
            else if(arr[i]=='E'){
                if(i<n-1&&arrBw[i+1]>=0&&arrFw[i]>0){
                    arrBw[i]=arrBw[i+1]+1;
                    sol=max(sol,arrBw[i]);
                }
            }
        }
        if(sol<0)cout<<"Tumse na ho paega\n";
        else cout<<sol/2<<endl;
    }
