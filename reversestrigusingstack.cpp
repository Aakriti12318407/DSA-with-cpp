#include<iostream>
#include<stack>
using namespace std;

void reverseString(string str){
    stack<string> st;

    for(int i=0; i<str.length(); i++){
        string ans ="";
        while(str[i] != ' ' && i < str.length()){
            ans += str[i];
            i++;
        }
        st.push(ans);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main(){
    string str = "Hello World";
    reverseString(str);
    return 0;

}