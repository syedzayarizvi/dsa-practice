#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {4, 5, 1, 2, 1, 4, 5};
    int n = 7;

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {

        if (frequency[arr[i]] == 1) {
            cout << "First non-repeating element: "
                 << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element found";

    return 0;
}
