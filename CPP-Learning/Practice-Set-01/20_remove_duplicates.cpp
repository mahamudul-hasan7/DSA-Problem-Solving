#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int unique[100], size = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            unique[size++] = arr[i];
        }
    }

    cout << "Unique array: ";
    for (int i = 0; i < size; i++) cout << unique[i] << " ";
    cout << endl;
    return 0;
}
