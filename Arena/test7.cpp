#include <iostream>
using namespace std;

long sqrt(long value){
    int i;
    for ( i=1 ; i*i<value ;i++){
    }
    return i;
}
long minprime(long n){
    long temp = sqrt(n);
    int arr[temp+2];
    for(int i = 0 ;i < temp+1 ; i++)
        arr[i] = 0;

    long i=0;
    for( i =2 ;i < temp+1; i++){
        if (arr[i]==1) {
            continue;
        }
        if(n%i == 0){
            return i;
        }else{
            for(long j= i+1;i*j<temp+1;j++){
                arr[i*j] = 1;
            }
        }
    }
    return n;
}

int main()
{
    int n;
    cin>>n;
    while(n--){
        long mrp;
        cin>>mrp;
        cout<<(mrp-minprime(mrp))<<endl;
    }
}
