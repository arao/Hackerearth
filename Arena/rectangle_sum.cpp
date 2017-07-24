//
// Created by Akhilesh on 17-07-2017.
//

#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int row, column ;
    cin >> row >> column ;

    int arr[row+1][column+1];
    for (int i=0 ; i<= row ; i++){
        for(int j=0; j <= column; j++){
            if(i == 0 || j == 0){
                arr[i][j]=0;
            }else{
                cin >> arr[i][j];
            }
        }
    }
    for(int i=1 ;i <= row; i++){
        for ( int j =1 ; j<=column ; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1] + arr[i][j];
        }
    }



    int query = 0;
    cin >> query ;
    while(query--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr[x2][y2] + arr[x1-1][y1-1] - arr[x1-1][y2] - arr[x2][y1-1] <<endl;
    }
}

