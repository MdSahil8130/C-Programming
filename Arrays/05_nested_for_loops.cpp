#include <iostream>

using namespace std;
// It is a basically a 2dimensional array or a matrix 
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout <<"("<<i<<","<< j<<")" << " ";
        }

        cout << endl;
    }

    return 0;
}