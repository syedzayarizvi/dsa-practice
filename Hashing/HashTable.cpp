#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    unordered_map<int, string> students;

    students[101] = "Ali";
    students[102] = "Rahul";
    students[103] = "Aman";

    cout << "Student 101: " << students[101] << endl;
    cout << "Student 102: " << students[102] << endl;

    return 0;
}
