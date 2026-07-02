/*
------------------------------------------------------------
1456. Maximum Number of Vowels in a Substring of Given Length
------------------------------------------------------------

Difficulty: Medium

Question:
Given a string s and an integer k, return the maximum
number of vowel letters in any substring of s with length k.

Vowel letters in English are:
'a', 'e', 'i', 'o', and 'u'.

Examples:

Example 1:
Input:  s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.

Example 2:
Input:  s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.

Example 3:
Input:  s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowel letters.

Constraints:
1 <= s.length <= 100000
s consists of lowercase English letters.
1 <= k <= s.length
------------------------------------------------------------
*/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        int ovmax = 0;

        // Store all vowels in a map for quick lookup
        map<char, int> mp;
        mp['a'] = 0;
        mp['e'] = 1;
        mp['i'] = 2;
        mp['o'] = 3;
        mp['u'] = 4;

        int start = 0;
        int end = k - 1;
        int maxi = 0;

        // Count vowels in the first window
        for (int i = start; i <= end; i++) {
            if (mp.find(s[i]) != mp.end())
                maxi++;
        }

        ovmax = max(ovmax, maxi);

        // Slide the window
        while (end < s.length() - 1) {

            // Remove the leftmost character
            if (mp.find(s[start]) != mp.end())
                maxi--;

            start++;

            // Add the next character
            if (mp.find(s[end + 1]) != mp.end())
                maxi++;

            end++;

            ovmax = max(ovmax, maxi);
        }

        return ovmax;
    }
};

int main() {
    Solution obj;

    string s;
    int k;

    cout << "Enter the string: ";
    cin >> s;

    cout << "Enter k: ";
    cin >> k;

    cout << "Maximum number of vowels = "
         << obj.maxVowels(s, k) << endl;

    return 0;
}