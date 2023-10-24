// #include <iostream>

// using namespace std;

// int main()
// {
//     int A[] = {1, 2, 3, 4, 5};
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         cout << A[i] << endl;
//         sum += A[i];
//     }
//     cout << "sum of elements of arrays is " << sum << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sum=0;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
        sum+=arr[i];
    }
    cout<<"sum of array is "<< sum<<endl;

    return 0;
}