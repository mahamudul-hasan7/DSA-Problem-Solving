// Problem: Palindrome Number
// Platform: LeetCode
// Difficulty: Easy
// Topic: Math
// Approach: Reversing half of the number
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        return x == revertedNumber || x == revertedNumber / 10;
    }
};
