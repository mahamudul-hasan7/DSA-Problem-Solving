#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal, rate, and time: ";
    cin >> principal >> rate >> time;

    double si = principal * rate * time / 100.0;
    cout << "Simple Interest: " << si << endl;
    return 0;
}
