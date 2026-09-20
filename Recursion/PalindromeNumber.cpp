#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {

    if (n == 0)
        return rev;

    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {

    int n = 121;

    if (n == reverseNumber(n))
        cout << n << " is a palindrome number";
    else
        cout << n << " is not a palindrome number";

    return 0;
}
