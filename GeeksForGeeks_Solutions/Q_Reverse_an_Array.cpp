#include <iostream>
#include <vector>
using namespace std;

/*
GeeksForGeeks - Reverse an Array

Difficulty: Easy
Accuracy: 55.32%
Submissions: 310K+
Points: 2
Average Time: 5m

Question:
You are given an array of integers arr[]. You have to reverse the given array.

Note:
Modify the array in place.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]

Explanation:
The elements of the array are [1, 4, 3, 2, 6, 5].
After reversing the array, the first element goes to the last position,
the second element goes to the second last position and so on.

Input: arr = [4, 5, 2]
Output: [2, 5, 4]

Input: arr = [1]
Output: [1]

Constraints:
1 ≤ arr.size() ≤ 10^5
0 ≤ arr[i] ≤ 10^5

Expected Approach:
Reverse the array in-place using two pointers.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size() - 1;

        while (i < j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};

void printArray(const vector<int>& arr) {
    cout << "[ ";

    for (int num : arr) {
        cout << num << " ";
    }

    cout << "]" << endl;
}

int main() {
    Solution obj;

    // Test Case 1
    vector<int> arr1 = {1, 4, 3, 2, 6, 5};
    obj.reverseArray(arr1);

    cout << "Test Case 1 Output: ";
    printArray(arr1);

    // Test Case 2
    vector<int> arr2 = {4, 5, 2};
    obj.reverseArray(arr2);

    cout << "Test Case 2 Output: ";
    printArray(arr2);

    // Test Case 3
    vector<int> arr3 = {1};
    obj.reverseArray(arr3);

    cout << "Test Case 3 Output: ";
    printArray(arr3);

    return 0;
}