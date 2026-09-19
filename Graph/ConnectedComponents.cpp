#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> graph[], bool visited[]) {

    visited[node] = true;

    for (int next : graph[node]) {
        if (!visited[next]) {
            dfs(next, graph, visited);
        }
    }
}

int main() {

    int vertices = 6;
    vector<int> graph[6];

    // Component 1
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[1].push_back(2);
    graph[2].push_back(1);

    // Component 2
    graph[3].push_back(4);
    graph[4].push_back(3);

    bool visited[6] = {false};
    int components = 0;

    for (int i = 0; i < vertices; i++) {

        if (!visited[i]) {
            components++;
            dfs(i, graph, visited);
        }
    }

    cout << "Connected Components: " << components;

    return 0;
}
