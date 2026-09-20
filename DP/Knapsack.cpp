#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> weight = {1, 3, 4, 5};
    vector<int> value = {1, 4, 5, 7};

    int n = weight.size();
    int capacity = 7;

    vector<vector<int>> dp(n + 1,
                           vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {

        for (int w = 1; w <= capacity; w++) {

            if (weight[i - 1] <= w) {

                dp[i][w] = max(
                    dp[i - 1][w],
                    value[i - 1] +
                    dp[i - 1][w - weight[i - 1]]
                );
            }
            else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    cout << "Maximum value = "
         << dp[n][capacity];

    return 0;
}
