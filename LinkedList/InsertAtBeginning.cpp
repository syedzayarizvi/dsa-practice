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

    Node* head = new Node(20);
    head->next = new Node(30);

    // Insert 10 at beginning
    Node* newNode = new Node(10);
    newNode->next = head;
    head = newNode;

    // Print linked list
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
