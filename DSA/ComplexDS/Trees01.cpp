// Basic construction of a BT and implementation of inorder traversal.
#include <iostream>
using namespace std;

// Step 1: Define a simple structure for a tree node
struct Node {
    int data;      
    Node* left;    // for left child
    Node* right;   // for right child

    // constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Step 2: A simple function to print the tree (Inorder Traversal)
void printTree(Node* root) {
    if (root == nullptr) return;  // base case
    printTree(root->left);        // visit left child
    cout << root->data << " ";    // print current node
    printTree(root->right);       // visit right child
}

// Step 3: Main function
int main() {
    // Creating nodes manually
    Node* root = new Node(1);      // root node
    root->left = new Node(2);      // left child of root
    root->right = new Node(3);     // right child of root
    root->left->left = new Node(4);  // left child of node 2
    root->left->right = new Node(5); // right child of node 2

    // Print the tree
    cout << "Inorder traversal of tree: ";
    printTree(root);

    return 0;
}
