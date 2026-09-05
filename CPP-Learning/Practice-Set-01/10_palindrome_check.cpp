#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int left = 0, right = s.size() - 1;
    bool ok = true;
    while (left < right) {
        if (s[left] != s[right]) {
            ok = false;
            break;
        }
        left++;
        right--;
    }

    cout << (ok ? "Palindrome" : "Not Palindrome") << endl;
    return 0;
}
