#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

    cout << "How many numbers? ";
    cin >> size;

    if (size <= 0) {
        cout << "The vector is empty.\n";
        return 0;
    }

    vector<int> numbers(size);

    cout << "Enter the numbers: ";
    for (int &value : numbers) {
        cin >> value;
    }

    int largest = numbers[0];

    for (int value : numbers) {
        if (value > largest) {
            largest = value;
        }
    }

    cout << "Largest number: " << largest << '\n';

    return 0;
}
