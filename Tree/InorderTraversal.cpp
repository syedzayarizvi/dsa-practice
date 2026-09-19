#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node* root) {

    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    inorder(root);

    return 0;
}
