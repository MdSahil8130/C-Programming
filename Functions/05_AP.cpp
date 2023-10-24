#include<iostream>

using namespace std;

int ap(int n){
    int ans =3*n +7 ;
    return ans;

}

int main () {
    int n ;
    cin>>n;

    cout<< n <<" term is "<< ap(n)<<endl;

    return 0;
}