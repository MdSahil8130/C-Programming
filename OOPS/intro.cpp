#include <iostream>

using namespace std;

class Hero
{
    // by default the access modifiers is private  which can be access inside class only
    // properties

    

    private :
    int health = 70 ;
    // public :
    private:
    char level = 'A';

    

    // accessing private member from outside the class
    // by using getter and setter 
    public :

    Hero(){
        cout<<"Constructor  called "<<endl;
    }
    Hero(int health){
        cout<<"this ->"<<this<<endl;
        this -> health = health ;
    }

    Hero(int health, char level){
        cout<<"this is : "<<this<<endl;
        this -> health =health;
        this -> level =level ;
    }
    public :

    int gethealth(){
        return health;
    }

    char  getlevel(){
        return level ;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char  ch ){
        level = ch ;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }



};

int main()
{

    // Hero Paul(10); // Hero is a customed data type which will called the constructor Paul.Hero function call
    // cout<<"Address of hero is :"<<&Paul<<endl;

    // Hero temp(90,'k');
    // temp.print();

    Hero Paul ;  // constructor

    Paul.sethealth(80);
    Paul.setlevel('B');

    cout<<"Paul health is : "<<Paul.gethealth()<<endl;
    

    cout<<"Paul level is : "<<Paul.getlevel()<<endl;


    // Paul.health = 80 ;
    // Paul.level = 'B';

    // cout<<"size :"<<sizeof(h1)<<endl;
    // accessing datat  from class

    // cout << "health is : " << Paul.gethealth() << endl;
    // cout << "level is : " << Paul.getlevel() << endl;

    return 0;
}