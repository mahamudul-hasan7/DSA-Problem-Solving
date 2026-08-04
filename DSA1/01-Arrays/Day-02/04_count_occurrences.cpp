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

    int target;

    cout << "Enter target value: ";
    cin >> target;

    int count = 0;

    for (int value : numbers) {
        if (value == target) {
            count++;
        }
    }

    cout << "Target appears " << count << " times." << endl;

    return 0;
}