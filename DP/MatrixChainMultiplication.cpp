#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    vector<int> dimensions = {10, 20, 30, 40, 30};

    int n = dimensions.size();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int length = 2; length < n; length++) {

        for (int i = 1; i < n - length + 1; i++) {

            int j = i + length - 1;

            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {

                int cost = dp[i][k]
                         + dp[k + 1][j]
                         + dimensions[i - 1]
                         * dimensions[k]
                         * dimensions[j];

                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    cout << "Minimum multiplication cost = "
         << dp[1][n - 1];

    return 0;
}
