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

Node* insert(Node* root, int value) {

    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

bool search(Node* root, int target) {

    if (root == nullptr)
        return false;

    if (root->data == target)
        return true;

    if (target < root->data)
        return search(root->left, target);

    return search(root->right, target);
}

int main() {

    Node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    int target = 40;

    if (search(root, target))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
