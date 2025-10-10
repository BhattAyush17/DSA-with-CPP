#include <iostream>
using namespace std;

void inorder(int tree[], int i, int n) {
    if (i > n || tree[i] == -1) return;
    inorder(tree, 2 * i, n);
    cout << tree[i] << " ";
    inorder(tree, 2 * i + 1, n);
}

void preorder(int tree[], int i, int n) {
    if (i > n || tree[i] == -1) return;
    cout << tree[i] << " ";
    preorder(tree, 2 * i, n);
    preorder(tree, 2 * i + 1, n);
}

void postorder(int tree[], int i, int n) {
    if (i > n || tree[i] == -1) return;
    postorder(tree, 2 * i, n);
    postorder(tree, 2 * i + 1, n);
    cout << tree[i] << " ";
}

int main() {
    int tree[7] = {-1, 1, 2, 3, 4, 5, 6};  // 1-based index
    int n = 6;

    cout << "Inorder: ";
    inorder(tree, 1, n);
    cout << "\nPreorder: ";
    preorder(tree, 1, n);
    cout << "\nPostorder: ";
    postorder(tree, 1, n);

    return 0;
}
