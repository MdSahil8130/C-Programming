// #include <iostream>

// using namespace std;
// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printarray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[5] = {5, 0, 8, 7, -8};
//     int brr[6] = {7, 8, 6, 4, 3, 2};

//     reverse(arr, 5);
//     reverse(brr, 6);

//     printarray(arr, 5);
//     printarray(brr, 6);

//     return 0;
// }

#include <iostream>

using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


void printarr(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main()
{

    int arr[6] = {1, 2, 5, 13, -3, 7};
    int brr[5] = {32, 41, 56, 1, 0};

    

    reverse(arr,6);
    cout<<endl;
    reverse(brr,5);

    printarr(arr,6);
    cout<<endl;
    printarr(brr,5);


    return 0;
}