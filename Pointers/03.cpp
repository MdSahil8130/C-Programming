#include<iostream>

using namespace std;


int main () {
    int arr[10] = {1,2,3,4};
    char ch[6] = "sahil";
    int *p = &arr[0];
    cout<<arr<<endl;
    cout<<ch<<endl;

    cout<<p<<endl;
    // but in case of character  arrays cout function will not implement be same as in case of integer array

    char *c = &ch[0];
    cout<<c<<endl;


    return 0;
}