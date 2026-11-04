// Problem: Roman to Integer
// Platform: LeetCode
// Difficulty: Easy
// Topic: Hash Table, Math, String
// Approach: Hash Map lookup and right-to-left traversal
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int total = 0;
        int prev = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            int current = values[s[i]];
            if (current < prev) {
                total -= current;
            } else {
                total += current;
            }
            prev = current;
        }

        return total;
    }
};
