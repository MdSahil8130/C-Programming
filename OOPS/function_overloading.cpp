#include<iostream>

using namespace std;

int volume(int a){
    return (a*a*a);
}

// volume of cylinder 

int volume(float r , int h){
    return (3.14*r*r*h);
}

// volume of cuboid
int volume (int l, int b ,int h){
    return (l*b*h);
}

int main () {
    
    cout<<"The volume of cube is "<<volume(3)<<endl;
    cout<<"The volume of cylinder  is "<<volume(3,5)<<endl;
    cout<<"The volume of cuboid  is "<<volume(3,4,5)<<endl;


    return 0;
}