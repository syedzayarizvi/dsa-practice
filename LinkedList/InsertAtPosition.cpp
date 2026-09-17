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

    // Insert 25 at position 3
    Node* newNode = new Node(25);

    Node* temp = head;

    // Move to position 2
    for (int i = 1; i < 2; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    // Print linked list
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
