#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {1, 5, 11, 5};

    int total = 0;

    for (int x : arr)
        total += x;

    if (total % 2 != 0) {
        cout << "Cannot be partitioned into equal subsets";
        return 0;
    }

    int target = total / 2;

    vector<bool> dp(target + 1, false);

    dp[0] = true;

    for (int num : arr) {

        for (int j = target; j >= num; j--) {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    if (dp[target])
        cout << "Array can be partitioned into equal subsets";
    else
        cout << "Array cannot be partitioned into equal subsets";

    return 0;
}
