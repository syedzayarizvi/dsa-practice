#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    int prefix[n];

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i];

    int left = 1;
    int right = 3;

    int rangeSum;

    if (left == 0)
        rangeSum = prefix[right];
    else
        rangeSum = prefix[right] - prefix[left - 1];

    cout << "Range sum from index "
         << left << " to " << right
         << " = " << rangeSum;

    return 0;
}
