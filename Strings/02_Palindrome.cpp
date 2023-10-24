#include <iostream>

using namespace std;

bool checkpalindrome(char arr[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    int size;
    cin >> size;

    char arr[size];
    cin >> arr;

    cout<<arr<<endl; // printing the string 

    cout<<checkpalindrome(arr,size);

    



    return 0;
}