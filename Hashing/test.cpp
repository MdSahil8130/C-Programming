#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    int k = 2;
    vector<int> ans;
    vector<int> res;
    map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        map[nums[i]]++;
    }

    for(auto it: map){
        ans.push_back(it.second);
    }

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();++i)
    {
        cout<<ans[i]<<" ";
    }
    
    int i = ans.size();
    while(k--)
    {
        res.push_back(ans[i-1]);
        i--;
    }
    cout<<endl;

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    return 0;
}