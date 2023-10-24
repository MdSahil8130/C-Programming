#include <iostream>

using namespace std;

class shop
{
    int itemid[10];
    int itemprice[10];
    int count = 0;

public:
    void setprice();
    void showprice();
};

void shop ::setprice()
{
    cout << "Enter the item with id no :" << count + 1 << endl;
    cin >> itemid[count];
    cout << "Enter the price : " << endl;
    cin >> itemprice[count];
    count++;
}

void shop ::showprice()
{
    for (int i = 0; i < count; i++){
        cout<<"The price os item with id no :"<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}

int main()
{
    shop dukan ;
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.showprice();
    return 0;
}