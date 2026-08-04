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

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    vector<int> uniqueNumbers;
    uniqueNumbers.push_back(numbers[0]);

    for (int i = 1; i < n; i++) {
        if (numbers[i] != numbers[i - 1]) {
            uniqueNumbers.push_back(numbers[i]);
        }
    }

    cout << "Array after removing duplicates: ";
    for (int value : uniqueNumbers) {
        cout << value << " ";
    }
    cout << endl;

    cout << "Unique count: " << uniqueNumbers.size() << endl;

    return 0;
}
