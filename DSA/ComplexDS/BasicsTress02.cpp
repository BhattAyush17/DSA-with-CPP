#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree() {
    int val;
    cout << "Enter data (-1 for no node): ";
    cin >> val;

    if (val == -1) return nullptr;  // if no node

    Node* root = new Node(val);     // create a new node
    cout << "Enter left child of " << val << ":\n";
    root->left = createTree();      // recursively create left subtree
    cout << "Enter right child of " << val << ":\n";
    root->right = createTree();     // recursively create right subtree

    return root;
}

// Step 3: Print tree in Inorder
void printInorder(Node* root) {
    if (root == nullptr) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}

// Step 4: Main function
int main() {
    cout << "Create your binary tree manually:\n";
    Node* root = createTree();

    cout << "\nInorder traversal of your tree: ";
    printInorder(root);
    cout << endl;

    return 0;
}