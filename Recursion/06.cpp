#include<iostream>

using namespace std;

bool issorted(int arr[], int size){
    // base case
    if(size==0 || size==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = issorted(arr+1,size-1);
        return ans;
    }
}


int main () {
    
    int arr[5]={1,123,3,4,5};

    bool ans = issorted(arr,5);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }
    else{
        cout<<"Array is not sorted "<<endl;
    }

    return 0;
}