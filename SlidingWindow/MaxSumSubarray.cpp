#include <iostream>
using namespace std;

int main() {

    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = 6;
    int k = 3;

    int windowSum = 0;

    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    int maxSum = windowSum;

    for (int i = k; i < n; i++) {

        windowSum += arr[i];
        windowSum -= arr[i - k];

        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    cout << "Maximum sum of subarray of size "
         << k << " = " << maxSum;

    return 0;
}
