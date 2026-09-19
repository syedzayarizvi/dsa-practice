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

void postorder(Node* root) {

    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {

    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    postorder(root);

    return 0;
}
