#include<iostream>

using namespace std;

int arrsum(int arr[], int size){
    // base case
    int n = arr[size-1];

    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    // recurrence relation
    return arr[0]+ arrsum(arr+1,size-1);
}


int main () {

    int arr[5]={1,2,3,4,5};

    int ans = arrsum(arr,5);
    cout<<endl;
    cout<<ans<<endl;


    return 0;
}