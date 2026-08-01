#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

    cout << "How many numbers? ";
    cin >> size;

    vector<int> numbers(size);

    cout << "Enter the numbers: ";
    for (int &value : numbers) {
        cin >> value;
    }

    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    int foundIndex = -1;

    for (int i = 0; i < static_cast<int>(numbers.size()); i++) {
        if (numbers[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1) {
        cout << "Number not found.\n";
    } else {
        cout << "Found at index: " << foundIndex << '\n';
    }

    return 0;
}
