#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> graph[], bool visited[]) {

    visited[node] = true;

    cout << node << " ";

    for (int next : graph[node]) {

        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

int main() {

    int vertices = 5;
    vector<int> graph[5];

    // Edges
    graph[0].push_back(1);
    graph[0].push_back(2);

    graph[1].push_back(3);

    graph[2].push_back(4);

    bool visited[5] = {false};

    cout << "DFS: ";

    dfs(0, graph, visited);

    return 0;
}
