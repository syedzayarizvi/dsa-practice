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

    int target = 20;
    Node* temp = head;

    while (temp != nullptr) {

        if (temp->data == target) {
            cout << "Element found";
            return 0;
        }

        temp = temp->next;
    }

    cout << "Element not found";

    return 0;
}
