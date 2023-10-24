// #include <iostream>

// using namespace std;

// void reverse(int arr[], int n)
// {

//     int start = 0;
//     int next = 1;

//     while (next < n - 1)
//     {
//         swap(arr[start], arr[next]);
//         start += 2;
//         next += 2;
//     }
// }

// void printarr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {

//     int arr[6] = {1, 2, 3, 4, 5, 6};
//     int brr[5] = {1, 2, 3, 4, 5};

//     // reverse(arr, 6);
//     // printarr(arr, 6);
//     // cout<<endl;
//     // reverse(brr, 5);
//     // printarr(brr, 5);

//     for (int i = 0; i <= 6; i += 2)
//     {
//         if (i + 1 > 6)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

void swaparr(int arr[], int n)
{

    int start = 0;
    int next = 1;

    // while (next < n)
    // {

    //     swap(arr[start], arr[next]);
    //     start += 2;
    //     next += 2;
    // }

    for (int i = 0; i + 1 < n; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    swaparr(arr, 5);

    printarr(arr, 5);

    return 0;
}