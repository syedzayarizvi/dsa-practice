#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[] = {1, 2, 3};
    int n = 3;
    int k = 3;

    unordered_map<int, int> prefixCount;

    prefixCount[0] = 1;

    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {

        prefixSum += arr[i];

        if (prefixCount.find(prefixSum - k) != prefixCount.end())
            count += prefixCount[prefixSum - k];

        prefixCount[prefixSum]++;
    }

    cout << "Number of subarrays with sum "
         << k << " = " << count;

    return 0;
}
