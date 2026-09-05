#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    int left = 0, right = n - 1;
    bool found = false;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            found = true;
            cout << "Found at index " << mid << endl;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (!found) cout << "Not found" << endl;
    return 0;
}
