#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> numbers(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int lastValue = numbers[n - 1];

    for (int i = n - 1; i > 0; i--) {
        numbers[i] = numbers[i - 1];
    }
    numbers[0] = lastValue;

    cout << "Array after right rotation by one: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
