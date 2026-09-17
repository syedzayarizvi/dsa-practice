#include <iostream>
using namespace std;

int main() {

    int queue[5];
    int front = 0;
    int rear = -1;

    // Enqueue
    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;

    cout << "Queue: ";

    for (int i = front; i <= rear; i++) {
        cout << queue[i] << " ";
    }

    return 0;
}
