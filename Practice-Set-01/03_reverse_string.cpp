#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    reverse(text.begin(), text.end());

    cout << "Reversed string: " << text << '\n';

    return 0;
}
