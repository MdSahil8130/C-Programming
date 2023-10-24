#include <iostream>

using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    // p = p + 1;
    cout << "inside update : " << p << endl;
    *p = *p + 1;
    // cout << *p << endl;
}
int getsum(int /*arr[] = *arr */ *arr, int n)  // this arr[] is not passed array it is a pointer 
{
    cout<<sizeof(arr)<<endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{

    // int value = 9;
    // int *p = &value;

    // print(p);
    // cout << "before : " << *p << endl;

    // update(p);

    // cout << "After : " << *p << endl;
    

    int arr[6] = {1, 2, 3, 4, 5 , 8};

    cout << "sum : " << getsum(arr , 5) << endl;  

    // benefits 
    // accessing specific part of array  using pointer 

    cout << "sum : " << getsum(arr + 2 , 4) << endl;  


    return 0;
}