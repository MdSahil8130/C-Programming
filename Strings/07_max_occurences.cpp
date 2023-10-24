#include <iostream>

using namespace std;

char tolowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        return ch - 'A'+'a';
    }
}

int main()
{

    string s = "outpuT";

    for(int i=0;i<s.size();i++){
        s[i]=tolowercase(s[i]);
    }


    int freq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxf = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > maxf)
        {
            maxf = freq[i];
            ans = i + 'a';
        }
    }
    cout << maxf << " " << ans;

    return 0;
}