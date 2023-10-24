#include <iostream>
// add array header file
#include <array>

using namespace std;

int main()
{

    int basic[3] = {1, 2, 3}; // basic array

    // STL array
    array<int, 5> a = {1, 2, 3, 4, 5};

    int size = a.size();

    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    // accessing any element at any index

    cout << "Element at 2 index " << a.at(2) << endl;

    cout << "Empty or not " << a.empty() << endl; // it will return boolean value

    cout << "First element is " << a.front() << endl;
    cout << "last element is " << a.back() << endl;

    return 0;
}