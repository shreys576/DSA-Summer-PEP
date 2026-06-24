#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode 1480. Running Sum of 1d Array

Difficulty: Easy

Question:
Given an array nums. We define a running sum of an array as:

runningSum[i] = sum(nums[0] ... nums[i])

Return the running sum of nums.

Examples:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]

Explanation:
Running sum is obtained as follows:
[1, 1+2, 1+2+3, 1+2+3+4]

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6

Approach:
Create a result vector.
Store the first element as-is.
For every other index, add the current number to the previous running sum.

Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();

        vector<int> res(size);

        res[0] = nums[0];

        for (int i = 1; i < size; i++) {
            res[i] = res[i - 1] + nums[i];
        }

        return res;
    }
};

void printVector(const vector<int>& arr) {
    cout << "[ ";

    for (int num : arr) {
        cout << num << " ";
    }

    cout << "]" << endl;
}

int main() {
    Solution obj;

    // Test Case 1
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> result1 = obj.runningSum(nums1);

    cout << "Test Case 1 Output: ";
    printVector(result1);

    // Test Case 2
    vector<int> nums2 = {1, 1, 1, 1, 1};
    vector<int> result2 = obj.runningSum(nums2);

    cout << "Test Case 2 Output: ";
    printVector(result2);

    // Test Case 3
    vector<int> nums3 = {3, 1, 2, 10, 1};
    vector<int> result3 = obj.runningSum(nums3);

    cout << "Test Case 3 Output: ";
    printVector(result3);

    return 0;
}