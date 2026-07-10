#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top is : " << s.top() << endl;

    s.pop();
    cout << "Top is : " << s.top() << endl;

    printStack(s);
    return 0;
}

