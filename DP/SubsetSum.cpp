#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {2, 3, 7, 8, 10};
    int target = 11;

    vector<bool> dp(target + 1, false);

    dp[0] = true;

    for (int num : arr) {

        for (int j = target; j >= num; j--) {

            if (dp[j - num]) {
                dp[j] = true;
            }
        }
    }

    if (dp[target])
        cout << "Subset with given sum exists";
    else
        cout << "Subset with given sum does not exist";

    return 0;
}
