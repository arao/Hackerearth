//
// Created by Akhilesh on 14-05-2017.
//
#include <bits/stdc++.h>
using namespace std;

int con(string month){
    string Arr[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    for (int i=0;i<12;i++){
        if (month==Arr[i]){
            return i+1;
        }
    }
    return -1;
}
string recon(int a){
    string Arr[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    return Arr[a-1];
}
bool  leap(int yyyy){
    if(yyyy%400==0)return true;
    if(yyyy%100==0)return false;
    if(yyyy%4==0)return true;
    return false;
}

bool monthOne(int mm){
    if(mm==2||mm==4||mm==6||mm==9||mm==11)return true;
    return false;
}

void previous(int &dd,int &mm,int &yyyy){
    if(leap(yyyy)){
        if(dd==1) {
            if (mm == 3) {
                dd = 29;
                mm = 2;
                return;
            } else if (monthOne(mm)) {
                dd = 31;
                mm = mm - 1;
                return;
            } else {
                if (mm == 1) {
                    dd = 31;
                    mm = 12;
                    yyyy -= 1;
                    return;
                } else {
                    dd = 30;
                    mm -= 1;
                    return;
                }
            }
        }
        else{
                dd-=1;
                return;
        }

    }
    else{
        if(dd==1) {
            if (mm == 3) {
                dd = 28;
                mm = 2;
                return;
            } else if (monthOne(mm)) {
                dd = 31;
                mm = mm - 1;
                return;
            } else {
                if (mm == 1) {
                    dd = 31;
                    mm = 12;
                    yyyy -= 1;
                    return;
                } else {
                    dd = 30;
                    mm -= 1;
                    return;
                }
            }
        }
        else{
            dd-=1;
            return;
        }
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--){
        int dd,mm,yyyy;
        string month;
        cin>>dd>>month>>yyyy;
        mm=con(month);
        previous(dd,mm,yyyy);
        month=recon(mm);
        cout<<dd<<" "<<month<<" "<<yyyy<<endl;
    }
    return 0;
}

