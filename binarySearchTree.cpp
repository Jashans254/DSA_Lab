#include<iostream>
using namespace std;

struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

BstNode* Insert(BstNode* root, int data) {
    if (root == NULL) {
        root = GetNewNode(data);
        return root;
    } else if (data <= root->data) {
        root->left = Insert(root->left, data);
    } else {
        root->right = Insert(root->right, data);
    }
    return root;
}

void Preorder(BstNode* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

int main() {
    BstNode* root = NULL;
    root = Insert(root, 5);
    root = Insert(root, 11);
    root = Insert(root, 21);
    root = Insert(root, 26);
    root = Insert(root, 8);
    root = Insert(root, 23);
    
    cout << "Preorder Traversal of Binary Search Tree is:\n";
    Preorder(root);

    return 0;
}