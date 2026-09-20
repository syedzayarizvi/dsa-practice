#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 4, 7, 6, 3, 2};
    int n = 7;

    int left = 0;
    int right = n - 1;

    while (left < right) {

        int mid = left + (right - left) / 2;

        if (arr[mid] < arr[mid + 1])
            left = mid + 1;
        else
            right = mid;
    }

    cout << "Peak element: " << arr[left] << endl;
    cout << "Peak index: " << left;

    return 0;
}
