#include <iostream>

using namespace std;

int firstocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1; // yeh isliye kiya  taki hum first occuenrece nikalske but
            // mid se mid nikalta h agr koi element mid se pehle present hoga toh iske liye end ko mid-1 kra
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastocc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    // int arr[6] = {
    //     1,
    //     2,
    //     2,
    //     3,
    //     3,
    //     4,
    // };

    int arr[6]={1,2,3,2,3,4};


    cout << " first occurence of 3 is at index " << firstocc(arr, 6, 3);
    cout << endl
         << " last  occurence of 3 is at index " << lastocc(arr, 6, 3);
        
        // total number of occurences of sorted array
        //  cout<<endl<<"total number of occurences of 3 are "<<lastocc(arr,6,3)-firstocc(arr,6,3)+1; 

    return 0;
}