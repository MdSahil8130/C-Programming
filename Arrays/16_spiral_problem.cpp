#include<iostream>

using namespace std;


int main () {
     
     int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

     for( int i=0;i<3;i++){
        for( int j =0 ;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }

    //  int row = arr.size();
    //  int col = arr[0].size();
    int total = 12;
    int count  = 0 ;

    int startrow=0;
    int endrow = 3-1;
    int endcol = 4-1;
    int startcol = 0;
    cout<<endl;

    while(startrow <= endrow && startcol<=endcol){
        // printing first row 
        for( int i = startcol ;  count <total && i <=endcol ;i++){
            cout<<arr[startrow][i]<<" ";
            count++;
        }
        startrow++;

        for( int i = startrow ; count <total && i<=endrow;i++){
            cout<<arr[i][endcol]<<" ";
            count++;
        }
        endcol--;

        if(startcol<=endcol){
        for( int i =endcol ;  count <total  && i>=startcol ;i--){
            cout<<arr[endrow][i]<<" ";
            count++;
        }
        endrow--;
        }

        if(startrow<=endrow){
        for( int i =endrow ;  count <total && i>=startrow ; i--){
            cout<<arr[i][startcol]<<" ";
            count++;
        }
        startcol++;
        }
    }

    return 0;
}