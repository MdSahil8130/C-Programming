#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i << " element ";
        cin >> arr[i];
    }

    cout << "Duplicate element are : ";

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                
            }
            break;;
        }
    }

    return 0;
}