#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {
    int n;

    // Take the array size
    cout << "Enter array size: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> numbers(n);

    // Read the array elements
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Use two pointers: one from the beginning and one from the end
    int left = 0;
    int right = n - 1;

    // Swap elements until both pointers meet in the middle
    while (left < right) {
        swap(numbers[left], numbers[right]);

        left++;
        right--;
    }

    // Print the reversed array
    cout << "Reversed array: ";

    for (int i = 0; i < n; i++) {
        cout << numbers[i];

        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}