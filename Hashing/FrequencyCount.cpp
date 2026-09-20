#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 3, 1, 2, 4, 3};
    int n = 8;

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    cout << "Frequency of elements:\n";

    for (auto item : frequency) {
        cout << item.first << " -> "
             << item.second << endl;
    }

    return 0;
}
