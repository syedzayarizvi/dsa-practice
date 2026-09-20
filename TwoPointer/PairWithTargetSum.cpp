#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 6};
    int n = 5;
    int target = 6;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found: "
                 << arr[left] << " and "
                 << arr[right];
            return 0;
        }

        if (sum < target)
            left++;
        else
            right--;
    }

    cout << "No pair found";

    return 0;
}
