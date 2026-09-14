#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "madam";
    bool isPalindrome = true;

    int left = 0;
    int right = str.length() - 1;

    while (left < right) {

        if (str[left] != str[right]) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome) {
        cout << str << " is a Palindrome." << endl;
    } else {
        cout << str << " is not a Palindrome." << endl;
    }

    return 0;
}
