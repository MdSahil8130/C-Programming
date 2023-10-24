#include<iostream>

using namespace std;

class complex{
    int a, b;
    public:
        // constructor overloading 
        complex(int x, int y){
            a = x;
            b = y;
        }
        complex(int x1){
            a = x1;
            b = 0;
        }
        void print(){
            cout<<"Complex number : "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main () {
    
    complex c1(2,3);
    c1.print();
    complex c2(4);
    c2.print();


    return 0;
}