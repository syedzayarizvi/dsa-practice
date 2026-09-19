#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;

    // Enqueue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Rear element: " << q.back() << endl;

    // Dequeue
    q.pop();

    cout << "After dequeue, front: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
