#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int greatest = a;
    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;

    cout << "Greatest number: " << greatest << endl;
    return 0;
}
