#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str = "bbbab";

    int n = str.length();

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }

    for (int length = 2; length <= n; length++) {

        for (int i = 0; i <= n - length; i++) {

            int j = i + length - 1;

            if (str[i] == str[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            }
            else {
                dp[i][j] = max(dp[i + 1][j],
                               dp[i][j - 1]);
            }
        }
    }

    cout << "Length of Longest Palindromic Subsequence = "
         << dp[0][n - 1];

    return 0;
}
