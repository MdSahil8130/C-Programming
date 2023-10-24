// #include <iostream>

// using namespace std;

// int main()
// {
//     int n, sum = 0, r, m;
//     cin >> n;
//     m = n;

//     while (n > 0)
//     {
//         r = n % 10;
//         n = n / 10;
//         sum += r * r * r;
//     }

//     if (sum == m)
//     {
//         cout << "It is amstrong";
//     }

//     return 0;
// }
#include<iostream>

using namespace std;


int main () {
    int n,m,r,sum=0;
    cin>>n;
    m=n;

    while(n>0){
        r=n%10;
        n=n/10;
        sum+=r*r*r;

    }
    if(sum==m){
        cout<<"It is an amstrong number"<<endl;
    }
    else{
        cout<<"It is not an amstrong number "<<endl;
    }

    return 0;
}