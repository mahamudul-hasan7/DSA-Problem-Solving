#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

    cout << "How many numbers? ";
    cin >> size;

    vector<int> numbers;

    cout << "Enter the numbers: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Vector elements: ";
    for (int value : numbers) {
        cout << value << ' ';
    }

    cout << '\n';
    return 0;
}
