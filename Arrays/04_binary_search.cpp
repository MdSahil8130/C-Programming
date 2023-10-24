// #include <iostream>

// using namespace std;

// int main()
// {
//     int a[5], key, mid;

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> a[i];//take input in ascending order
//     }

//     int l = 0, h = 9;
//     cout << "enter key ";
//     cin >> key;

//     while (l <= h)
//     {
//         mid = (l + h) / 2;

//         if (a[mid] == key)
//         {
//             // cout << "key is found at " << mid << endl;
//             cout << "key is found at " << mid;
//             // cout<<mid;
//             return 0;
//         }
//         else if (key < a[mid])
//         {
//             h = mid - 1;
//             // cout << "key is found at " << mid << endl;
//         }
//         else
//         {
//             l = mid + 1;
//             // cout << "key is found at " << mid;
//         }
//     }
//     cout << "key not found " << endl;

//     return 0;
// }
// // #include <iostream>

// // using namespace std;

// // int main()
// // {
// //     int a[5], key, mid;
// //     int l = 0, h = 9;

// //     for (int i = 0; i < 5; i++)
// //     {
// //         cin >> a[i];
// //     }
// //     cout << "enter key " << endl;
// //     cin >> key;

// //     while (l <= h)
// //     {
// //         mid = (l + h) / 2;

// //         if (key == a[mid])
// //         {
// //             cout << "key is found at " << mid << endl;
// //             return 0;
// //         }
// //         else if (key < a[mid])
// //         {
// //             h = mid - 1;
// //         }
// //         else
// //         {
// //             l = mid + 1;
// //         }
// //     }
// //     cout << "key is not found " << endl;

// //     return 0;
// // }
#include <iostream>

using namespace std;

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int arr[6] = {2, 4, 6, 8, 10, 12};
    int brr[5] = {1, 3, 5, 7, 9};

    cout << "key is found at index " << binarysearch(arr, 6, 100) << endl;
    cout << "key is found at index " << binarysearch(brr, 5, 1) << endl;

    return 0;
}

// #include <iostream>

// using namespace std;

// int  binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2;

//     while (start <= end)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             if (arr[mid] == key)
//             {
//                 // cout<<
//                 return mid;
//             }
//             else if (key > arr[mid])
//             {
//                 start = mid + 1;
//             }
//             else if (key < arr[mid])
//             {
//                 end = mid - 1;
//             }
//             mid=(start+end)/2;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

//     for (int i = 0; i < 10; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
//     int key;
//     cout << "Enter the element to search for ";
//     cin >> key;

//     int  found = binarysearch(arr, 10, key);


//     // cout<<"key is found at index "<<binarysearch(arr,10,key);
//     if (found)
//     {
//         cout << "Key is found  at index "<<binarysearch(arr,10,key);
//     }
//     else
//     {
//         cout << "key is not found ";
//     }

//     return 0;
// }