#include<iostream>

using namespace std;


int main () {

    
    int arr[10]= {2,5,9};

    cout<<"Address of first block element "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first block element "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl; // it will print the value present at the 0th index 
    cout<<"5th "<<*arr + 1<<endl;
    cout<<"6th "<<*(arr + 1)<<endl;

    // genral formula 
    // arr[i] = *(arr + i );

    // another imp formula 
    // **************** i[arr]= *(i + arr);***********************

    int i = 2;
    cout<<i[arr]<<endl;

    

   int temp[10]= {1,2};
   int *p = &temp[0];

   cout<<sizeof(temp)<<endl;
   cout<<sizeof(temp[0])<<endl;

   cout<<sizeof(p)<<endl;
   cout<<sizeof(*p)<<endl;  // in some other compiler it gives : 8
   

  int a[10]= {1,2};

  cout<<"->"<<&a[0]<<endl;
  cout<<a<<endl;

  int *pt = &a[0];

  cout<<"->"<<&pt<<endl;


    return 0;
}