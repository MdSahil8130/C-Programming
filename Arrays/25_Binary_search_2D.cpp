// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[3][4] = {1, 3, 5, 7, 10, 11, 16, 20, 23, 30, 34, 60};

//     int row = sizeof(arr) / sizeof(arr[0]);
//     int col = sizeof(arr[0]) / sizeof(arr[0][0]);

//     int start = 0;
//     int end = row * col - 1;
//     int mid = start + (end - start) / 2;

//     int key;
//     cout << "Enter  the key you want to search for : " << endl;
//     cin >> key;

//     while (start <= end)
//     {
//         int element = arr[mid / col][mid % col];

//         if (element == key)
//         {
//             cout << "key found  at "<<"("<< mid / col<<","<<mid%col<<")" <<endl;
//             return 0 ;
//         }
//         else if (element < key)
//         {
//             start = mid + 1;
//         }
//         else if (element > key)
//         {
//             end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     cout<<"Key not found ";

//     return 0;
// }

#include<iostream>

using namespace std;


int main () {
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int row =  sizeof(a) / sizeof(a[0]);
    cout<<row<<endl;

    int col = sizeof(a[0])/sizeof(int);
    cout<<col;


    return 0;
}