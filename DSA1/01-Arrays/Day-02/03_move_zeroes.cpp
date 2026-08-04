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

    int insertPos = 0;

    for (int i = 0; i < n; i++) {
        if (numbers[i] != 0) {
            numbers[insertPos] = numbers[i];
            insertPos++;
        }
    }

    while (insertPos < n) {
        numbers[insertPos] = 0;
        insertPos++;
    }

    cout << "Array after moving zeroes to the end: ";
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
