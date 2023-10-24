#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector<int> arr1(n);
    vector<int> arr2(m);
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr1.push_back(a);
    }

    cout << "arr 2" << endl;

    for (int i = 0; i < m; i++)
    {
        cin >> a;
        arr2.push_back(a);
    }

    // vector<int> ans;

    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());

    // for (int i = 0; i < n; i++)
    // {
    //     int ele = arr1[i];
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (ele == arr2[j])
    //         {
    //             ans.push_back(ele);
    //             arr2[j] = -111;
    //             break;
    //         }
    //     }
    // }

    int i1 = 0, i2 = 0;
    vector<int> ans;
    while (i1 < n && i2 < m)
    {
        if (arr1[i1] == arr2[i2])
        {
            ans.push_back(arr1[i1]);
            i1++;
            i2++;
        }
        else if (arr1[i1] > arr2[i2])
        {
            i2++;
        }
        else
        {
            i1++;
        }
        while (i1 > 0 && i1 < n && arr1[i1] == arr1[i1 - 1])
            i1++;
        while (i2 > 0 && i2 <m && arr2[i2] == arr2[i2 - 1])
            i2++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
