#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int vertices = 5;
    vector<int> graph[5];

    // Edges
    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(3);

    graph[2].push_back(4);

    bool visited[5] = {false};

    queue<int> q;

    // Start BFS from vertex 0
    visited[0] = true;
    q.push(0);

    cout << "BFS: ";

    while (!q.empty()) {

        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int node : graph[current]) {

            if (!visited[node]) {
                visited[node] = true;
                q.push(node);
            }
        }
    }

    return 0;
}
