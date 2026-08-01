#include <algorithm>
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

    sort(numbers.begin(), numbers.end());

    cout << "Sorted numbers: ";
    for (int value : numbers) {
        cout << value << ' ';
    }

    cout << '\n';
    return 0;
}
