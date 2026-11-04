#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    long long result = 1;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << "Result: " << result << endl;
    return 0;
}
