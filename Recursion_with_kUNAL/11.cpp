// subset and subsequences problems

#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void subSeq(string up, string p)
{
    if (up.empty())
    {
        cout << p << " "<< endl;
        return;
    }

    char ch = up[0];
    subSeq(up.substr(1), p + ch);

    subSeq(up.substr(1), p);
}

// vector<string> ans;

// std::vector<string> subSeq(string str)
// {
//     if (str.length() == 0)
//     {
//         vector<string> empty;
//         empty.push_back("");
//         return empty;
//     }

//     char ch = str[0];

//     string substr = str.substr(1);

//     vector<string> subSequences = subSeq(substr);

//     vector<string> res;

//     for (string val : subSequences)
//     {
//         res.push_back(val);
//         res.push_back(ch + val);
//     }

//     return res;
// }

// void subSet(vector<int> up, vector<int> p , int i)
// {
//     if (up.size() == 0)
//     {
//         for (auto val : p)
//         {
//             cout << val << endl;
//         }
//         return ;
//     }

//     int val = up[i];

//     subset(up)
// }

int main()
{
    string up = "123";

    string p = "";

    subSeq(up, p);



    return 0;
}