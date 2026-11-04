// Problem: Longest Common Prefix
// Platform: LeetCode
// Difficulty: Easy
// Topic: String, Trie
// Approach: Horizontal scanning
// Time Complexity: O(S) where S is the sum of all characters in strings
// Space Complexity: O(1)

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];
        for (size_t i = 1; i < strs.size(); i++) {
            while (strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if (prefix.empty()) return "";
            }
        }

        return prefix;
    }
};
