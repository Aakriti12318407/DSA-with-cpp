#include <bits/stdc++.h>
using namespace std;

void deleteBottom(stack<int>& st) {
    
    if (st.empty())
        return;

    int topElement = st.top();
    st.pop();

    if (st.empty()) {
        return;   
    }

    deleteBottom(st);

    st.push(topElement);
}

int main() {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    deleteBottom(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}
