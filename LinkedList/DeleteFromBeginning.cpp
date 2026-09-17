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

    // Delete first node
    Node* temp = head;
    head = head->next;
    delete temp;

    // Print linked list
    temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
