#include <iostream>
using namespace std;

int main() {

    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1};
    int n = 8;

    int current = 0;
    int maxOnes = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] == 1) {
            current++;
        } else {
            current = 0;
        }

        if (current > maxOnes)
            maxOnes = current;
    }

    cout << "Maximum consecutive ones = " << maxOnes;

    return 0;
}
