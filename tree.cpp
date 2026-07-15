#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
void preorder(Node* root){
    //base case
    if (root == nullptr){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}
int main(){
    
}