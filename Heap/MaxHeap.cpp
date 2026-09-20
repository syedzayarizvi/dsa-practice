#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {

    vector<int> heap;

public:

    void insert(int value) {

        heap.push_back(value);

        int i = heap.size() - 1;

        while (i > 0) {

            int parent = (i - 1) / 2;

            if (heap[parent] >= heap[i])
                break;

            swap(heap[parent], heap[i]);

            i = parent;
        }
    }

    void display() {

        for (int value : heap)
            cout << value << " ";

        cout << endl;
    }
};

int main() {

    MaxHeap h;

    h.insert(50);
    h.insert(30);
    h.insert(40);
    h.insert(10);
    h.insert(20);
    h.insert(60);

    cout << "Max Heap: ";
    h.display();

    return 0;
}
