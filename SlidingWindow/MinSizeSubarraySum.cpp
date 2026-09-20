#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = 6;
    int target = 7;

    int left = 0;
    int windowSum = 0;
    int minLength = INT_MAX;

    for (int right = 0; right < n; right++) {

        windowSum += arr[right];

        while (windowSum >= target) {

            int length = right - left + 1;

            if (length < minLength)
                minLength = length;

            windowSum -= arr[left];
            left++;
        }
    }

    if (minLength == INT_MAX)
        cout << "No subarray found";
    else
        cout << "Minimum subarray length = "
             << minLength;

    return 0;
}
