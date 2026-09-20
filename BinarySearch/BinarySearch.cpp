#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int target = 40;

    int left = 0;
    int right = n - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index " << mid;
            return 0;
        }

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << "Element not found";

    return 0;
}
