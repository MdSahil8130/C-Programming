#include <iostream>

using namespace std;

bool binayrsearch(int arr[], int s, int e, int key)
{

    
    // base case
    if (s > e)
    {
        return false;
    }
    int mid = (s + e) / 2;

    // element found case
    if(arr[mid]==key){
        return true;
    }

    
    
    if (arr[mid] < key)
    {
        bool res1 = binayrsearch(arr, mid + 1, e, key);
        return res1;
    }
    else
    {
        bool res2 = binayrsearch(arr, s, mid - 1, key);
        return res2;
    }
}

int main()
{
    int arr[6] = {2, 4, 5, 7, 9, 10};
    int size = 6;

    int key;
    cin >> key;
    int s = 0;
    int e = size - 1;

    bool ans = binayrsearch(arr, s, e, key);
    if(ans){
        cout<<"PRESENT"<<endl;
    }
    else{
        cout<<"NOT PRESENT"<<endl;
    }

    return 0;
}