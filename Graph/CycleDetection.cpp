#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node, int parent, vector<int> graph[], bool visited[]) {

    visited[node] = true;

    for (int next : graph[node]) {

        if (!visited[next]) {
            if (dfs(next, node, graph, visited))
                return true;
        }
        else if (next != parent) {
            return true;
        }
    }

    return false;
}

int main() {

    int vertices = 4;
    vector<int> graph[4];

    // Edges
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[1].push_back(2);
    graph[2].push_back(1);

    graph[2].push_back(3);
    graph[3].push_back(2);

    graph[3].push_back(0);
    graph[0].push_back(3);

    bool visited[4] = {false};

    if (dfs(0, -1, graph, visited))
        cout << "Cycle detected";
    else
        cout << "No cycle";

    return 0;
}
