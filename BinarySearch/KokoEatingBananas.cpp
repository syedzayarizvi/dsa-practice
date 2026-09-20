#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canFinish(vector<int>& piles, int h, int speed) {

    long long hours = 0;

    for (int bananas : piles) {
        hours += (bananas + speed - 1) / speed;
    }

    return hours <= h;
}

int main() {

    vector<int> piles = {3, 6, 7, 11};
    int h = 8;

    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    int answer = right;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (canFinish(piles, h, mid)) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    cout << "Minimum eating speed = " << answer;

    return 0;
}
