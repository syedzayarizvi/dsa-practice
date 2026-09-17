#include <iostream>
using namespace std;

int main() {

    int stack[3];
    int top = -1;

    // Push elements
    for (int i = 1; i <= 3; i++) {

        if (top == 2) {
            cout << "Stack Overflow" << endl;
        } else {
            stack[++top] = i * 10;
        }
    }

    cout << "Stack is full." << endl;

    // Pop all elements
    while (top != -1) {
        cout << "Popped: " << stack[top] << endl;
        top--;
    }

    // Try to pop from empty stack
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    }

    return 0;
}
