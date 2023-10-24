// // #include <iostream>

// // using namespace std;

// // int getmax(int arr[], int size)
// // {
// //     // int max = INT32_MIN;
// //     int maxi = arr[0];

// //     for (int i = 0; i < size; i++)
// //     {
// //         maxi = max(maxi, arr[i]);

// //         // if (arr[i] > max)
// //         // {
// //         //     max = arr[i];
// //         // }
// //     }
// //     // cout << "max is " << max;
// //     // returning max value
// //     return maxi;
// // }
// // int getmin(int arr[], int size)
// // {
// //     int min = INT32_MAX;
// //     for (int i = 0; i < size; i++)
// //     {
// //         if (arr[i] < min)
// //         {
// //             min = arr[i];
// //         }
// //     }
// //     return min;
// // }

// // int main()
// // {
// //     int size;
// //     cin >> size;

// //     // int a[size];//noht ghatiya prtice h
// //     int a[10];

// //     for (int i = 0; i < size; i++)
// //     {
// //         cin >> a[i];
// //     }

// //     cout << "MAX value is " << getmax(a, size) << endl;
// //     cout << "MIN value is " << getmin(a, size) << endl;
// //     return 0;
// // }
// #include <iostream>

// using namespace std;

// int getmax(int arr[], int n)
// {
//     // int max = INT32_MIN;
//     int max =arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int getmin(int arr[], int n)
// {
//     // int min = INT32_MAX;
//     int min =arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main()
// {

//     int size;
//     cin >> size;

//     int num[100];

//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "maximun value is " << getmax(num, size) << endl;
//     cout << "minimum value is " << getmin(num, size) << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int getmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[5] = {1, 3, 5, 7, 9};
    cout<<getmax(arr,5);

    return 0;
}