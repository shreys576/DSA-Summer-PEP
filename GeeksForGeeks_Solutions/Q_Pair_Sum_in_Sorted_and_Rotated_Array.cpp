/*
Pair Sum in a Sorted and Rotated Array

Difficulty: Medium

Problem Statement:
Given an array of positive elements arr[] that is sorted and then
rotated around an unknown point, the task is to check if the array
has a pair whose sum is equal to the given target.

Examples:

Input:
arr[] = {7, 9, 1, 3, 5}
target = 6

Output:
true

Explanation:
arr[2] + arr[4] = 1 + 5 = 6.


Input:
arr[] = {2, 3, 4, 1}
target = 3

Output:
true

Explanation:
arr[0] + arr[3] = 2 + 1 = 3.


Input:
arr[] = {10, 7, 4, 1}
target = 9

Output:
false

Explanation:
No pair exists whose sum is equal to the target.

Constraints:
2 <= arr.size() <= 10^6
1 <= arr[i] <= 10^6
1 <= target <= 10^6
*/

#include <iostream>
#include <vector>
using namespace std;

bool pairInSortedRotated(vector<int>& arr, int target) {
    int largest = arr.size() - 1;

    // Find the pivot (largest element)
    for(int i = 0; i < arr.size() - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            largest = i;
            break;
        }
    }

    int smallest = (largest + 1) % arr.size();

    while(smallest != largest) {
        int sum = arr[smallest] + arr[largest];

        if(sum == target)
            return true;

        else if(sum > target)
            largest = (largest - 1 + arr.size()) % arr.size();

        else
            smallest = (smallest + 1) % arr.size();
    }

    return false;
}

int main() {

    vector<int> arr = {7, 9, 1, 3, 5};
    int target = 6;

    if(pairInSortedRotated(arr, target))
        cout << "True\n";
    else
        cout << "False\n";

    return 0;
}