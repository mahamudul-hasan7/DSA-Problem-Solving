#include <iostream>
using namespace std;

void addBonus(int &score, int bonus) {
    score += bonus;
}

int main() {
    int score;
    int bonus;

    cout << "Enter score and bonus: ";
    cin >> score >> bonus;

    addBonus(score, bonus);

    cout << "Updated score: " << score << '\n';

    return 0;
}
