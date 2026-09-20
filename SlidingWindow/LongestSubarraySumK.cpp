#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 1, 1, 1, 2, 3};
    int n = 7;
    int k = 3;

    int left = 0;
    int windowSum = 0;
    int maxLength = 0;

    for (int right = 0; right < n; right++) {

        windowSum += arr[right];

        while (windowSum > k) {
            windowSum -= arr[left];
            left++;
        }

        if (windowSum == k) {
            int length = right - left + 1;

            if (length > maxLength)
                maxLength = length;
        }
    }

    cout << "Longest subarray with sum "
         << k << " = " << maxLength;

    return 0;
}
