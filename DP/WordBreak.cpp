#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string word = "leetcode";

    vector<string> dictionary = {
        "leet", "code"
    };

    int n = word.length();

    vector<bool> dp(n + 1, false);

    dp[0] = true;

    for (int i = 1; i <= n; i++) {

        for (string str : dictionary) {

            int len = str.length();

            if (len <= i &&
                word.substr(i - len, len) == str &&
                dp[i - len]) {

                dp[i] = true;
                break;
            }
        }
    }

    if (dp[n])
        cout << "Word can be segmented";
    else
        cout << "Word cannot be segmented";

    return 0;
}
