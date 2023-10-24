#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char tolowercase(char ch)
{
    if (ch <= 'z' && ch >= 'a')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

void reverse(string q, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(q[s], q[e]);
        s++;
        e--;
    }
    cout << endl
         << "your reverse string is " << q;
}

int getlength(string a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        count++;
    }
    return count;
}

bool checkpalindrome(string a)
{
    int s = 0;
    int e = a.size() - 1;

    while (s < e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{

    string str;
    cin >> str;
    cout<<"your string is " << str;

    int len = getlength(str);
    cout << endl
         << "length of string is " << len << endl; // length of string

    //  now reversing the string
    reverse(str, len);

    // now converting the whole string in lower case

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolowercase(str[i]);
    }

    cout << endl
         <<" your lowercase string is "<< str << endl;

    cout << endl
         << "PALINDROME OR NOT : " << checkpalindrome(str);

    string str2 = "43567";
    sort(str2.begin(), str2.end());

    cout << endl;
    for (int i = str2.size() - 1; i >= 0; i--)
    {
        cout << str2[i];
    }

    cout << endl;

    string s = "test";

    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = -1;
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxf <<" "<<ans<<endl;

    return 0;
}