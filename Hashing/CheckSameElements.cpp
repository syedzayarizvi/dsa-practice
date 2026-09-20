#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 3, 2, 1};

    int n = 4;

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr1[i]]++;
    }

    for (int i = 0; i < n; i++) {
        frequency[arr2[i]]--;
    }

    bool same = true;

    for (auto item : frequency) {
        if (item.second != 0) {
            same = false;
            break;
        }
    }

    if (same)
        cout << "Both arrays have the same elements";
    else
        cout << "Arrays have different elements";

    return 0;
}
