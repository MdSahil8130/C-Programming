// #include <iostream>

// using namespace std;

// void swap(int arr[], int n)
// {

//     for (int i = 0; i < n-1; i++)
//     {

//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 swap(arr[j],arr[i]);
//             }
//         }

//     }
// }

//     void print(int arr[], int n)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << arr[i]<<' ';
//         }
//     }

// int main()
// {

//     int arr[5] = {1, 5, 3, 7, 9};

//     swap(arr,5);

//     cout<<endl;

//     print(arr,5);

//     return 0;
// }

#include <iostream>

using namespace std;

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {5,4,3,2,1};

    sort(arr, 5);

    cout << endl;
    print(arr, 5);

    cout << endl;
    int count = 0; //ek se jyade element ke ki copy h toh zero se start;
    // int count = 1; // ek hi element ki copy h toh 1 se start ;

    // for (int i = 0; i < 5; i++)
    // {
    //     // cout << arr[i] << " ";
    //     if (arr[i] == arr[i + 1])
    //     {
    //         count++;
    //     }
    // }
    // cout << endl
    //      << count;

    return 0;
}