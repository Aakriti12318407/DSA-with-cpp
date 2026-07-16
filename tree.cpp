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
int countNodes(Node* root){
    if(root == NULL) return 0;

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount + rightCount + 1;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal: ";
    preorder(root);
    cout << "\n";

    cout << "Total nodes: " << countNodes(root) << "\n";
    return 0;
}
int countLeaf(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;

    int leftCount = countLeaf(root->left);
    int rightCount = countLeaf(root->right);
    return leftCount + rightCount;

}
int sumOfNodes(Node* root){
    if(root == NULL) return 0;
    int LeftSum = sumOfNodes(root->left);
    int RightSum = sumOfNodes(root->right);
    return LeftSum + RightSum + root->data;
}

