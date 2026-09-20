#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> cost = {10, 15, 20};

    int n = cost.size();

    vector<int> dp(n + 1, 0);

    for (int i = 2; i <= n; i++) {
        dp[i] = min(dp[i - 1] + cost[i - 1],
                     dp[i - 2] + cost[i - 2]);
    }

    cout << "Minimum cost = " << dp[n];

    return 0;
}
