// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//         {
//             // int count = n;
//             for (int j = 1; j <= n; j++)
//             {
//                 if (i>j)
//                 {
//                     cout << "*";
//                 }
//                 else
//                 {
//                     cout <<n-j+1;
//                     // count--;
                   
//                 }
//             }
//             cout<<endl;
//         }

//     return 0;
// }
#include<iostream>

using namespace std;


int main () {
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>6){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }

    return 0;
}
