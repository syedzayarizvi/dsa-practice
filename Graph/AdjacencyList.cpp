#include <iostream>
#include <vector>
using namespace std;

int main() {

    int vertices = 4;

    vector<int> graph[4];

    // Edges
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(2);
    graph[2].push_back(0);

    graph[1].push_back(3);
    graph[3].push_back(1);

    // Display adjacency list
    for (int i = 0; i < vertices; i++) {

        cout << i << " -> ";

        for (int node : graph[i]) {
            cout << node << " ";
        }

        cout << endl;
    }

    return 0;
}
