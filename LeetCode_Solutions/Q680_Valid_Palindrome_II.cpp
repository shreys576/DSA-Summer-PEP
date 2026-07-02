/*
------------------------------------------------------------
680. Valid Palindrome II
------------------------------------------------------------

Difficulty: Easy

Question:
Given a string s, return true if s can become a palindrome
after deleting at most one character.

Examples:

Example 1:
Input:  "aba"
Output: true

Example 2:
Input:  "abca"
Output: true
Explanation: You could delete the character 'c'.

Example 3:
Input:  "abc"
Output: false

Constraints:
1 <= s.length <= 100000
s consists of lowercase English letters.
------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    // Checks if the substring s[left...right] is a palindrome
    bool helper(string &s, int left, int right) {
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                // Skip either the left or the right character
                return helper(s, left + 1, right) ||
                       helper(s, left, right - 1);
            }
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (obj.validPalindrome(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}