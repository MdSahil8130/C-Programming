// // #include <iostream>

// // using namespace std;

// // void printarray(int arr[], int size)
// // {

// //     cout << "printing the array " << endl;
// //     for (int i = 0; i < size; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// //     cout << "printing done " << endl;
// // }

// // int main()
// // {
// //     int third[15] = {2, 7};
// //     printarray(third, 15);

// //     int fourth[10]={0};
// //     printarray(fourth,10);

// //     int arr[10];

// //     int arrsize=sizeof(arr)/sizeof(int);
// //     cout<<"size of arr is "<<arrsize;

// //     return 0;
// // }

// #include <iostream>

// using namespace std;

// void printarr(int arr[], int size)
// {
//     cout << "printing th array " << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
//     cout << "printing DONE " << endl;
// }

// int main()
// {

//     int arr[10]={1,2,3,4,13};
//     printarr(arr, 10);

//     int fourth[5]={1,2,31,3,1,};
//     printarr(fourth,5);

//     int third[10]={0};
//     printarr(third,10);

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &arr)
{
    for (auto &&it : arr)
        cout << it << " ";

    cout << endl;
}

int sum1(vector<int> &arr)
{
    int s = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        // if(i+1 <arr.size())
        if (arr[i] != arr[i + 1])
            s += arr[i];
    }

    return s;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b;
        vector<int> c;

        int sum = sum1(a);

        if (sum == a[0]){
            cout<< -1 <<endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {

            if (sum % a[i] == 0)
            {
                b.push_back(a[i]);
            }
            else
                c.push_back(a[i]);
        }

        cout << b.size() << " " << c.size() << endl;

        print(b);
        print(c);
    }

    return 0;
}