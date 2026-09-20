#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {10, 9, 2, 5, 3, 7, 101, 18};

    int n = arr.size();

    vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {

        for (int j = 0; j < i; j++) {

            if (arr[i] > arr[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    int answer = 0;

    for (int x : dp) {
        answer = max(answer, x);
    }

    cout << "Length of LIS = " << answer;

    return 0;
}
