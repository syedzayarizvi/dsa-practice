#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int n = 7;

    unordered_set<int> seen;

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++) {

        if (seen.find(arr[i]) != seen.end()) {
            cout << arr[i] << " ";
        } else {
            seen.insert(arr[i]);
        }
    }

    return 0;
}
