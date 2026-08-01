#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;

    cout << "How many numbers? ";
    cin >> size;

    vector<int> numbers(size);
    long long sum = 0;

    cout << "Enter the numbers: ";
    for (int &value : numbers) {
        cin >> value;
        sum += value;
    }

    double average = 0.0;

    if (!numbers.empty()) {
        average = static_cast<double>(sum) / numbers.size();
    }

    cout << "Sum: " << sum << '\n';
    cout << fixed << setprecision(2);
    cout << "Average: " << average << '\n';

    return 0;
}
