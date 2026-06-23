#include <iostream>
#include <vector>
using namespace std;

/*
GeeksForGeeks - Check if Array is Sorted

Difficulty: Easy
Accuracy: 39.37%
Submissions: 407K+
Points: 2
Average Time: 15m

Question:
Given an array arr[], check whether it is sorted in non-decreasing order.
Return true if it is sorted otherwise false.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: true
Explanation: The given array is sorted.

Input: arr[] = [90, 80, 100, 70, 40, 30]
Output: false
Explanation: The given array is not sorted.

Constraints:
1 ≤ arr.size() ≤ 10^6
-10^9 ≤ arr[i] ≤ 10^9

Approach:
Traverse the array and compare every element with the next one.
If any element is greater than the next element, the array is not sorted.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isSorted(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

void printResult(bool result) {
    cout << (result ? "true" : "false") << endl;
}

int main() {
    Solution obj;

    // Test Case 1
    vector<int> arr1 = {10, 20, 30, 40, 50};
    cout << "Test Case 1: ";
    printResult(obj.isSorted(arr1));

    // Test Case 2
    vector<int> arr2 = {90, 80, 100, 70, 40, 30};
    cout << "Test Case 2: ";
    printResult(obj.isSorted(arr2));

    // Test Case 3
    vector<int> arr3 = {1};
    cout << "Test Case 3: ";
    printResult(obj.isSorted(arr3));

    // Test Case 4
    vector<int> arr4 = {1, 1, 2, 2, 3, 3};
    cout << "Test Case 4: ";
    printResult(obj.isSorted(arr4));

    return 0;
}