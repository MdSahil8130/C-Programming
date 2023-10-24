#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c ;
    float r1,r2;

    cout<<"enter the value of a ,b ,c \n";
    cin>>a>>b>>c ;

    r1=(-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
    r2=(-b- sqrt(pow(b,2)-4*a*c))/(2*a);

    // cout<<"roots are\n"<<r1<<" "<<r2;
    cout<<"first root is "<<r1;
    cout<<"\nsecond root is "<<r2;
    return 0;



}