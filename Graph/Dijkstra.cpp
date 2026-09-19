#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int vertices = 5;
    vector<pair<int, int>> graph[5];

    // {connected vertex, weight}
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});

    graph[2].push_back({1, 2});
    graph[1].push_back({3, 1});
    graph[2].push_back({3, 5});
    graph[3].push_back({4, 3});

    const int INF = 1000000;

    vector<int> distance(vertices, INF);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    distance[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {

        int currentDistance = pq.top().first;
        int current = pq.top().second;

        pq.pop();

        if (currentDistance > distance[current])
            continue;

        for (auto edge : graph[current]) {

            int next = edge.first;
            int weight = edge.second;

            if (distance[current] + weight < distance[next]) {

                distance[next] = distance[current] + weight;

                pq.push({distance[next], next});
            }
        }
    }

    cout << "Shortest distances from vertex 0:\n";

    for (int i = 0; i < vertices; i++) {
        cout << "0 -> " << i << " = " << distance[i] << endl;
    }

    return 0;
}
