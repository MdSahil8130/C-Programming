// // #include <iostream>

// // using namespace std;
// // int main()
// // {
// //     int n;

// //     cout << "enter the value of n " << endl;
// //     cin >> n;

// //     int prod = 1;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         prod *= i;
// //     }
// //     cout << "factorial is " << prod;

// //     return 0;
// // }
// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the value of n ";
//     cin >> n;
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     cout << "factorial of " << n << " is " << fact << endl;

//     return 0;
// }

#include<iostream>

using namespace std;


int main () {
    int n;

    cout<<"enter number ";
    cin>>n;

    int fact =1 ;
    
    for(int i=1;i<=n;i++){
        fact*=i;

    }
    cout<<"factorial of "<< n <<" is "<<fact;

    return 0;
}