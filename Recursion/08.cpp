#include<iostream>

using namespace std;

void print(int arr[], int size){
    cout<<"size of arr  is "<<size <<endl;
    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool search(int arr[], int size, int key){
    print(arr, size);
    // base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool res = search(arr+1,size-1 ,key);
        return res;
    }
}

int main () {
    int arr[5] = {1,3,4,6,7};
    int size = 5;

    int key;
    cin>>key;

    bool ans = search(arr,size,key);

    if(ans){
        cout<<"PRESENT"<<endl;
    }
    else{
        cout<<"NOT PRESENT"<<endl;
    }

    return 0;
}