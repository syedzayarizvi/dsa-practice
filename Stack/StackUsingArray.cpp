#include <iostream>
using namespace std;

int main() {

    int stack[5];
    int top = -1;

    // Push
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    // Display
    cout << "Stack: ";

    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    return 0;
}
