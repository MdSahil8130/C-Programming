#include<iostream>

using namespace std;

class simple{
    int data1;
    int data2;
    public:

        simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }

        void print(){
            cout<<"The value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
        }
};

int main () {
    simple s(1);
    s.print();

    return 0;
}