#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {

    int vertices = 6;
    vector<int> graph[6];

    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(2);
    graph[2].push_back(0);

    graph[1].push_back(3);
    graph[3].push_back(1);

    graph[2].push_back(4);
    graph[4].push_back(2);

    graph[3].push_back(5);
    graph[5].push_back(3);

    int distance[6];
    for (int i = 0; i < vertices; i++)
        distance[i] = -1;

    queue<int> q;

    int start = 0;
    distance[start] = 0;
    q.push(start);

    while (!q.empty()) {

        int current = q.front();
        q.pop();

        for (int next : graph[current]) {

            if (distance[next] == -1) {
                distance[next] = distance[current] + 1;
                q.push(next);
            }
        }
    }

    int target = 5;

    cout << "Shortest distance from "
         << start << " to " << target
         << " = " << distance[target];

    return 0;
}
