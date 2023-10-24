#include <iostream>

using namespace std;

int peakvalue(int arr[], int n)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else 
        {
            e = mid;
            // return mid;
        }
        mid = s + (e - s) / 2;
    }
    // return arr[mid];
    return s;
}

int main()
{

    int arr[5]= {1,2,6,3,4};

    cout<<"Peak value  is "<<arr[peakvalue(arr,5)];
    

    return 0;
}