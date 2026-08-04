#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Get the number of elements
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> numbers(n);

    // Store all elements in the array
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // At first, consider the first element as both minimum and maximum
    int minimumValue = numbers[0];
    int maximumValue = numbers[0];

    // Compare the remaining elements with the current minimum and maximum
    for (int i = 1; i < n; i++) {
        if (numbers[i] < minimumValue) {
            minimumValue = numbers[i];
        }

        if (numbers[i] > maximumValue) {
            maximumValue = numbers[i];
        }
    }

    cout << "Minimum: " << minimumValue << endl;
    cout << "Maximum: " << maximumValue << endl;

    return 0;
}