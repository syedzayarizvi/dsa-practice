#include <iostream>
using namespace std;

int main() {

    int stack[5];
    int top = -1;

    // Push
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Top element: " << stack[top] << endl;

    // Pop
    cout << "Popped element: " << stack[top] << endl;
    top--;

    cout << "After pop, top element: " << stack[top] << endl;

    return 0;
}
