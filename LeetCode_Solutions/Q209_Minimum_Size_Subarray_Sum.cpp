/*
------------------------------------------------------------
209. Minimum Size Subarray Sum
------------------------------------------------------------

Difficulty: Medium

Question:
Given an array of positive integers nums and a positive
integer target, return the minimal length of a subarray
whose sum is greater than or equal to target.

If there is no such subarray, return 0 instead.

Examples:

Example 1:
Input:
target = 7
nums = [2,3,1,2,4,3]

Output:
2

Explanation:
The subarray [4,3] has the minimal length under the problem
constraint.

Example 2:
Input:
target = 4
nums = [1,4,4]

Output:
1

Example 3:
Input:
target = 11
nums = [1,1,1,1,1,1,1,1]

Output:
0

Constraints:
1 <= target <= 10^9
1 <= nums.length <= 100000
1 <= nums[i] <= 10000
------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minsize = INT_MAX;
        int i = 0;
        int sum = 0;

        // Expand the sliding window
        for (int j = 0; j < nums.size(); j++) {
            sum += nums[j];

            // Shrink the window while it satisfies the condition
            while (sum >= target) {
                minsize = min(minsize, j - i + 1);
                sum -= nums[i++];
            }
        }

        if (minsize == INT_MAX)
            return 0;

        return minsize;
    }
};

int main() {
    Solution obj;

    int target, n;

    cout << "Enter target: ";
    cin >> target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Minimum subarray length = "
         << obj.minSubArrayLen(target, nums) << endl;

    return 0;
}