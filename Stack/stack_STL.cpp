#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creaation
    stack<int> s;
    // push operation
    s.push(1);
    s.push(2);
    // pop operation
    s.pop();
    cout << "Printing the top element " << s.top() << endl;
    
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    return 0;
}