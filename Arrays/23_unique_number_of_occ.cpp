// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// bool ans(int freq[], int size)
// {

//     for (int i = 1; i <= size; i++)
//     {
//         if (freq[i] != 0)
//         {
//             if (freq[i] == freq[i++] && freq[i] == freq[i++] && freq[i] == freq[i = i - 2])
//             {
//                 // cout << "false" ;
//                 return 0;
//                 break;
//             }
//             else
//             {
//                 // cout<<"true" ;
//                 return 1;
//                 break;
//             }
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// int main()
// {

//     int size;
//     cout << "enter the size " << endl;
//     cin >> size;
//     int arr[size];

//     for (int i = 0; i <= size; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     int freq[size] = {0};

//     for (int i = 0; i <= size; i++)
//     {
//         freq[arr[i]]++;
//     }
//     cout << endl;

//     // now display the freq of ecah element
//     for (int i = 1; i <= size; i++)
//     {
//         if (freq[i] != 0)
//         {
//             cout << "freq of "
//                  << " " << i << " is " << freq[i] << " " << endl;
//         }
//         else
//         {
//             break;
//         }
//     }

//     // now boolean value

//     // cout<<endl<<"unique number of occurences present ot not : "<<ans(freq,size);

//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int main () {
    unordered_map<int,int>m;
    int n;
    cin>>n;

    cout<<"****************"<<endl;

    for(int i = 0;i<n;i++){
        int  p;
        cin>>p;
        m[p]++;
    }

    cout<<"**********************"<<endl<<endl;
    for(auto value : m){
        cout<<"freq of "<<value.first<<"  is "<<value.second<<endl;
    }


    return 0;
}