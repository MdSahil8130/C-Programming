// #include<iostream>

// using namespace std ;

// int main (){
//     int n,sum ;
//     cout<<"enter the value of n ";
//     cin>>n;
//     sum=n*(n+1)/2;
//     cout<<"sum of first n is "<<sum;
//     return 0;

// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum =0 ;

    for(int i =0 ; i<=n ;i++){
        sum+=i;
    }


    // sum = (n * (n + 1)) / 2;

    cout << "Sum of first " << n << " is " << sum;

    return 0;
}