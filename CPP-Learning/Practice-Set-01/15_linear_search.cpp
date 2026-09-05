#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter target: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            cout << "Found at index " << i << endl;
            break;
        }
    }

    if (!found) cout << "Not found" << endl;
    return 0;
}
