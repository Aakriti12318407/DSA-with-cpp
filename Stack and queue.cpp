#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"Top element of stack: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element of stack after pop: "<<s.top()<<endl;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Front element of queue: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element of queue after pop: "<<q.front()<<endl;

    return 0;
}