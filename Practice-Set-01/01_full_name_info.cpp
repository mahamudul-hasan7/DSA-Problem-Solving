#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Full Name: " << fullName << '\n';
    cout << "Length: " << fullName.length() << '\n';

    if (!fullName.empty()) {
        cout << "First Character: " << fullName.front() << '\n';
        cout << "Last Character: " << fullName.back() << '\n';
    }

    return 0;
}
