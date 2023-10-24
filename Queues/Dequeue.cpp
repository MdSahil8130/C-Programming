#include<iostream>

using namespace std;

class Dequeue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    Dequeue()
    {   
        size = 100001;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    bool isEmpty(){
        return (front==-1);
    }

    bool isFull(){
        return (front==0 && rear==size-1 || (front==rear+1));
    }

    bool pushFront(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(front==0 )
        {
            front =size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
        return true;
    }

    bool pushBack(int x){
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front==-1)
        {
            front=rear=0;
        }
        else if(rear==size-1 && front!=0)
        {
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }

    int popFront()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(front==size-1)
            {
                front=0;
            }
            else{
                front++;
            }
            return ans;
        }
    }

    int popBack()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            int ans=arr[rear];
            arr[rear]=-1;
            if(front==rear)
            {
                front=rear=-1;
            }
            else if(rear==0)
            {
                rear=size-1;
            }
            else{
                rear--;
            }
            return ans;
        }
    }

    int getFront()
    {
        if(isEmpty()){
            cout<<"EROOR : dequeue is empty";
            return -1;
        }
        return arr[front];
    }
    int getBack()
    {
        if(isEmpty()){
            cout<<"EROOR : dequeue is empty";
            return -1;
        }
        return arr[rear];
    }
};



int main () {
    Dequeue dq;
    cout<<dq.getFront()<<endl;
    dq.pushFront(2);
    dq.pushFront(1);
    dq.pushBack(3);
    dq.pushBack(4);
    cout<<dq.getFront()<<endl;
    dq.popFront();
    cout<<dq.getFront()<<endl;
    cout<<dq.getBack()<<endl;

    return 0;
}