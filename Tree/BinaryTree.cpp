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

int main() {

    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    cout << "Root: " << root->data << endl;
    cout << "Left: " << root->left->data << endl;
    cout << "Right: " << root->right->data << endl;

    return 0;
}
