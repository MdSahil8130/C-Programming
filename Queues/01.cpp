// #include <iostream>

// using namespace std;
// #define n 20

// class queue
// {
// public:
//     int *arr;
//     int front;
//     int back;
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }

//     void push(int ele)
//     {
//         if (back == (n - 1))
//         {
//             cout << "queue overflow" << endl;
//             return;
//         }
//         else
//         {
//             back++;
//             arr[back] = ele;
//         }
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     void pop()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "No element in queue " << endl;
//             return;
//         }
//         front++;
//     }

//     int peek()
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "NO element in queue " << endl;
//             return -1;
//         }
//         else
//         {
//             return arr[front];
//         }
//     }
//     bool isempty()
//     {
//         if (front == -1 || front > back)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     queue q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     cout<<q.peek()<<endl;
//     q.pop();
//     cout<<q.peek()<<endl;


//     return 0;
// }

#include<iostream>

using namespace std;

class Queue{
    int*arr;
    int front;
    int rear;
    int size;
    public:
    Queue()
    {
        size=100001;
        arr = new int[size];
        front=0;
        rear=0;
    }
    
    bool isEmpty()
    {
        if(front==rear)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void push(int data)
    {
        // checking overflow condition 
        if(rear==size-1)
        {
            cout<<"Queue Overflow"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int pop()
    {
        if(front==rear)
        {
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front]=-1;
            front++;

            if(rear==front)
            {
                front=0;
                rear =0;
            }

            return ans;
        }
    }

    int qfront()
    {
        if(front==rear)
        {
            cout<<"Queue Overflow"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main () {

    Queue q;

    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queuen is not empty"<<endl;
    }

    q.push(3);
    q.push(1);
    q.push(2);

    cout<<"front element is "<<q.qfront()<<endl;
    
    cout<<"popped element is "<<q.pop()<<endl;
    cout<<"popped element is "<<q.pop()<<endl;
    cout<<"popped element is "<<q.pop()<<endl;
    cout<<"popped element is "<<q.pop()<<endl;

    cout<<"front element is "<<q.qfront()<<endl;


    return 0;
}