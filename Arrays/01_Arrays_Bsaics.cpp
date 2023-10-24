#include <iostream>

using namespace std;

int main()
{
    // initialising an array 
    int A[5] = {1, 2, 3, 4, 5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // initialising the whole array wiht zero

    int v[10]={0};
    // for(int i=0; i<10;i++){
    //     cout<<v[i]<<endl;
    // }

    for(auto x: v)
    cout<<x<<endl;
    // for (auto x : A)

    // cout << x << endl;

    return 0;
}
