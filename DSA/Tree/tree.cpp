/*
Tree: it is a non-linear, hierarchical data structure consisiting of nodes connected by edges.
Binary Tree: a tree is a binary tree when every node has atmost two children.
Terminologies:  
Leaf Node: Nodes having no child.
Internal Node: A node which is not a leaf.
Siblings: Children of same parents.
Lenght of Path: (Number of nodes encountered in the path) - 1;
Ancestor: if there is a path from node A to node B then A is called ancestor of node B and B is called descendant of node A;
Subtree: Any node of a tree with all of its descendants is called subtree;
Level: the level of the node refers to its distance from the root, the root of the tree has generally level 0;

*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

// Inorder: <left> <root> <right>
// PreOrder: <root> <left> <right>
void inorder(Node* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if(!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorder(root);
    cout << endl;
    preorder(root);
    return 0;
}