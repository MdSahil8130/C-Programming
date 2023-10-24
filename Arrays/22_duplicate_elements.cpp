#include<iostream>

using namespace std;


int main () {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // XOr ing all elements 
    int ans=0;

    for(int i=0;i<n;i++){
        ans^=arr[i];
    }

    // xor ing from 1 to n-1

    for(int i=1;i<n;i++){
        ans^=i;
    }
    
    cout<< "Duplicate element is "<<ans;

    return 0;
}