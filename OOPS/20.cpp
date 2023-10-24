#include<iostream>

using namespace std;
// int count = 0;

class num{
    public:
        num(){
            // count++;
            cout<<"This is a time when constructor is called "<<endl;
        }
        ~num(){
            cout<<"This is the time when destructor is called "<<endl;
            // count--;
        }

};

int main () {
    cout<<"We are inside main functiion "<<endl;
    cout<<"Creatin first object "<<endl;
    num n1;;
    {
        cout<<"Entering this block "<<endl;
        cout<<"Creating two more object "<<endl;
        num n2 , n3;
        cout<<"exiting this block" <<endl;
    }

    cout<<"Back to main"<<endl;

    return 0;
}