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

    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes: " << count;

    return 0;
}
