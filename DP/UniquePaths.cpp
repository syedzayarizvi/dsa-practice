#include <iostream>
#include <vector>
using namespace std;

int main() {

    int rows = 3;
    int cols = 3;

    vector<vector<int>> dp(rows, vector<int>(cols, 1));

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    cout << "Number of unique paths = " << dp[rows - 1][cols - 1];

    return 0;
}
