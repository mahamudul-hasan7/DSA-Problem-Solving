#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }

    cout << "Digit count: " << count << endl;
    return 0;
}
