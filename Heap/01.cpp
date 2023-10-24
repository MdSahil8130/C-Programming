// #include <iostream>

// using namespace std;

// class heap
// {

// public:
//     int arr[100];
//     int size;

//     heap()
//     {
//         arr[0] = -1;
//         size = 0;
//     }

//     void insert(int val)
//     {
//         size = size + 1;
//         int index = size;
//         arr[index] = val;

//         while (index > 1)
//         {
//             int parent = index / 2;

//             if (arr[parent] < arr[index])
//             {
//                 swap(arr[parent], arr[index]);
//                 index = parent;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }

//     void print()
//     {
//         for (int i = 1; i <= size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }

//     void deleteFromHeap()
//     {
//         if (size == 0)
//         {
//             cout << "Nothing to delete" << endl;
//         }

//         // step 1 put the last element into first element position
//         arr[1] = arr[size];
//         size--;

//         // step 2 take root node to its correct position

//         int i = 1;

//         while (i < size)
//         {
//             int leftIndex = 2 * i;
//             int rightIndex = 2 * i + 1;

//             if (leftIndex < size && arr[i] < arr[leftIndex])
//             {
//                 swap(arr[i], arr[leftIndex]);
//                 i = leftIndex;
//             }
//             else if (rightIndex < size && arr[i] < arr[rightIndex])
//             {
//                 swap(arr[i], arr[rightIndex]);
//                 i = rightIndex;
//             }
//             else
//             {
//                 return;
//             }
//         }
//     }
// };

// void heapify(int arr[], int n, int i)
// {
//     int largest = i;
//     int left = 2 * i;
//     int right = 2 * i + 1;

//     if (left <= n && arr[largest] < arr[left])
//     {
//         largest = left;
//     }
//     if (right <= n && arr[largest] < arr[right])
//     {
//         largest = right;
//     }

//     if (largest != i)
//     {
//         swap(arr[largest], arr[i]);
//         heapify(arr, n, largest);
//     }
// }

// void heapSort(int arr[], int n)
// {
//     int size = n;
//     while (size > 1)
//     {
//         swap(arr[size], arr[1]);
//         size--;

//         heapify(arr, size, 1);
//     }
// }

// int main()
// {
//     heap h;
//     h.insert(50);
//     h.insert(59);
//     h.insert(58);
//     h.insert(54);
//     h.insert(57);

//     h.print();
//     h.deleteFromHeap();
//     h.print();

//     int n = 5;
//     int arr[6] = {-1, 54, 53, 55, 52, 50};
//     for (int i = n / 2; i > 0; i--)
//     {
//         heapify(arr, n, i);
//     }

//     cout << "printing the array" << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     // heapSort

//     heapSort(arr, n);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

#include <iostream>

using namespace std;

void reverse(int *arr, int s, int e)
{
    if (s > e)
        return;

    swap(arr[s], arr[e]);

    reverse(arr, s + 1, e - 1);
}

bool palindrome(string s, int l, int r)
{
    if (l > r)
        return true;

    if (s[l] != s[r])
        return false;
    palindrome(s, l + 1, r - 1);
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    reverse(arr, 0, 4);
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    string s = "112";
    if(palindrome(s,0,2))
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}