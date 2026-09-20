#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> money = {2, 7, 9, 3, 1};

    int n = money.size();

    vector<int> dp(n);

    dp[0] = money[0];
    dp[1] = max(money[0], money[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1],
                    dp[i - 2] + money[i]);
    }

    cout << "Maximum money = " << dp[n - 1];

    return 0;
}
