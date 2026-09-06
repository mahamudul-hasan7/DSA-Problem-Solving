#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int count = 0;
    bool inWord = false;
    for (char ch : s) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    if (inWord) count++;

    cout << "Word count: " << count << endl;
    return 0;
}
