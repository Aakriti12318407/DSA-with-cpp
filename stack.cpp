#include <iostream>
using namespace std;

class myStack {
public:
    int *arr;
    int top;
    int size;

    myStack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    ~myStack() {
        delete[] arr;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }

        cout << arr[top] << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }
};

int main() {

    myStack st(5);

    st.push(10);
    st.push(20);

    st.pop();

    cout << st.isEmpty() << endl;

    return 0;
}
