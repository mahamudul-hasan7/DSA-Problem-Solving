#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;

    // Take the size of the array from the user
    cout << "Enter array size: ";
    cin >> n;

    // Array size must be greater than zero
    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> numbers(n);
    long long sum = 0;

    // Read the array elements and calculate the total sum
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Convert the sum to double before division to get an accurate average
    double average = static_cast<double>(sum) / n;

    cout << "Sum: " << sum << endl;

    // Show the average with two digits after the decimal point
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    return 0;
}