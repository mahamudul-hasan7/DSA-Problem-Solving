#include <iostream>
using namespace std;

void swapNumbers(int &first, int &second) {
    int temporary = first;
    first = second;
    second = temporary;
}

int main() {
    int firstNumber;
    int secondNumber;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    swapNumbers(firstNumber, secondNumber);

    cout << "After swap: " << firstNumber << ' '
         << secondNumber << '\n';

    return 0;
}
