#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Take the size of the array
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> numbers(n);

    // Read all elements from the user
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;

    // Take the value that needs to be searched
    cout << "Enter target value: ";
    cin >> target;

    // -1 means the target has not been found yet
    int foundIndex = -1;

    // Check each element one by one
    for (int i = 0; i < n; i++) {
        if (numbers[i] == target) {
            foundIndex = i;
            break;
        }
    }

    // Display the result based on whether the target was found
    if (foundIndex != -1) {
        cout << "Target found at index: " << foundIndex << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}