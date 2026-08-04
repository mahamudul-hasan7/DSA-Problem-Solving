#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // At least two elements are needed to find a second largest value
    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "At least 2 elements are required." << endl;
        return 0;
    }

    vector<int> numbers(n);

    // Read the array elements
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // Start with the first element as the largest value
    int largest = numbers[0];
    int secondLargest = 0;
    bool secondLargestFound = false;

    // Traverse the array once and keep track of the two largest distinct values
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
            secondLargestFound = true;
        } else if (numbers[i] < largest) {
            // Update second largest only when it is not set
            // or the current value is greater than the previous second largest
            if (!secondLargestFound || numbers[i] > secondLargest) {
                secondLargest = numbers[i];
                secondLargestFound = true;
            }
        }
    }

    // If all elements are equal, a distinct second largest value does not exist
    if (secondLargestFound) {
        cout << "Second largest distinct element: "
             << secondLargest << endl;
    } else {
        cout << "No second largest distinct element found." << endl;
    }

    return 0;
}