#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        return ch - 'A' + 'a';
    }
}

char touppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        return ch - 'a' + 'A';
    }
}

int main()
{

    // string str = "SAHIL";

    // for (int i = 0; i < str.length(); i++)
    // {
    //     str[i] = tolowercase(str[i]);
    // }

    // cout << str << " " << endl;

    // string str2 = "mohd";

    // for (int i = 0; i < str2.size(); i++)
    // {
    //     str2[i] = touppercase(str2[i]);
    // }
    // cout << str2;

    string str = "SDJFLSJDFLJSLKJDFLJKJDSF";

    transform(str.begin(),str.end(),str.begin(),:: tolower); // pehle 2 argu entire string ke liye fir 3rd kha se start krna fir :: tolower or upper
    cout<<str<<endl;

    return 0;
}