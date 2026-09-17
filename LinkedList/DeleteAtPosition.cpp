#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

int main() {

    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    // Delete node at position 2
    Node* temp = head;

    for (int i = 1; i < 2; i++) {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = deleteNode->next;
    delete deleteNode;

    // Print linked list
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
