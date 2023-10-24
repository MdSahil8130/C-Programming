// #include <iostream>

// using namespace std;

// int main()
// {
//     int A[10], key;

//     cout << "Enter numbers " << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin >> A[i];
//     }
//     cout << "Enter Key " << endl;
//     cin >> key;

//     for (int i = 0; i < 10; i++)
//     {
//         if (key == A[i])
//         {
//             cout << "key is found at " << i;
//             return 0;
//         }
//     }
//     cout << "key is not found ";

//     return 0;
// }

#include <iostream>

using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout<<"key is found at "<<i<< " index"<<endl;;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int a[5] = {5, -2, 9, -90, 0};
    int key;

    cout << "enter the key you want to search for " << endl;
    cin >> key;

    bool found = search(a, 5, key); // yeh bool found variable true false check krega if returm 0 -> false return 1-> true
    if (found)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent " << endl;
    }

    return 0;
}
