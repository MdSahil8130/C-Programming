#include <iostream>

using namespace std;

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return ch-'A'+'a';
    }
}

bool checkpalindrome(char name[], int n ){
    int s=0;
    int e=n-1;
    while(s<e){
        if(tolowercase(name[s])!=tolowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[] ,int n )
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char name[10]; // declaration of character arrays
    

    cout << "Enter your name " << endl;
    cin >> name; // input
    // name[3] = '\0'; // null character it will stop the triversing in character arrays

    cout << "Your name is ";
    cout << name; // string output

    int len = getlength(name);

    cout << endl
         << "Length of string is : " << getlength(name);

    reverse(name, len);

    cout<<endl<<"your reverse string is "<<name<<endl;
    

    cout<<"Palindrome or not : "<<checkpalindrome(name,len);

    cout<<endl<<"CHARACTER TO LOWERCASE : "<<tolowercase('B');

    return 0;
}