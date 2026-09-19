#include <iostream>
using namespace std;

int main() {

    int queue[5];
    int front = -1;
    int rear = -1;
    int size = 5;

    // Enqueue
    for (int i = 1; i <= 3; i++) {
        if ((rear + 1) % size == front) {
            cout << "Queue is full";
            return 0;
        }

        if (front == -1)
            front = 0;

        rear = (rear + 1) % size;
        queue[rear] = i * 10;
    }

    // Display
    cout << "Circular Queue: ";

    int i = front;
    while (true) {
        cout << queue[i] << " ";

        if (i == rear)
            break;

        i = (i + 1) % size;
    }

    return 0;
}
