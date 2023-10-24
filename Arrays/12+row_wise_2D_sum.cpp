// #include <iostream>

// using namespace std;

// void sum(int arr[][3], int row, int col)
// {
//     // int sum = 0;

//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// void sum1(int brr[3][3], int col, int row)
// {
//     for (int col = 0; col < 3; col++)
//     {
//         int sum = 0;
//         for (int row = 0; row < 3; row++)
//         {
//             sum += brr[col][row];
//         }
//         cout << sum << " ";
//     }
// }

// int largestsum(int arr[][3], int row, int col)
// {
//     int maxi = INT32_MIN;
//     int rowindex = row;
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         if (sum > maxi)
//         {
//             maxi = sum;
//         }
//     }
//     cout << "maximum sum is " << maxi << endl;
//     return rowindex;
// }

// int main()
// {
//     // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int brr[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};

//     // taking row wise input
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cin >> arr[i][j];
//     //     }
//     // }

//     // for (int i = 0; i < 3; i++)
//     // {
//     //     for (int j = 0; j < 3; j++)
//     //     {
//     //         cout << arr[i][j];
//     //     }
//     //     cout << endl;
//     // }

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // sum(arr, 3, 3);
//     sum(brr, 3, 3);

//     // int ans = largestsum(brr, 3, 3);

//     // cout << "row index  is at " << ans << " ";

//     return 0;
// }

#include <iostream>

using namespace std;

void printsum(int arr[][3], int row, int col)
{
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

void printsum1(int arr[][3], int row, int col)
{
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
}

int largestsum(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    // int rowindex=row;
    for (row = 0; row < 3; row++)
        {
            int sum = 0;
            for (col = 0; col < 3; col++) {
                sum += arr[row][col];
            }
            if(sum>maxi){
                maxi=sum;
            }

        }
        cout<<endl<<"maximum sum is "<<maxi;
        return col;
}

int main()
{

    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    printsum(arr, 3, 3);

    // cout<<endl;
    // printsum1(arr,3,3);

     int ans =largestsum(arr,3,3);
     cout<<endl<<"row index is at "<<ans;

    return 0;
}