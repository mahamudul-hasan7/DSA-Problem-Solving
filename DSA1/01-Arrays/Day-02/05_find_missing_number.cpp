#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter n (array should contain numbers from 1 to n with one missing): ";
    cin >> n;

    if (n <= 1) {
        cout << "Invalid n." << endl;
        return 0;
    }

    vector<int> numbers(n - 1);

    cout << "Enter " << n - 1 << " elements: ";
    for (int i = 0; i < n - 1; i++) {
        cin >> numbers[i];
    }

    long long expectedSum = 1LL * n * (n + 1) / 2;
    long long actualSum = 0;

    for (int value : numbers) {
        actualSum += value;
    }

    long long missingNumber = expectedSum - actualSum;

    cout << "Missing number: " << missingNumber << endl;

    return 0;
}
