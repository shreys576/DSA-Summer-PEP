#include <iostream>
using namespace std;

bool isThere(int arr[], int n, int target){
    if(n == 0) return false;
    return arr[n - 1] == target || isThere(arr, n - 1, target);
}

int main(){
    int arr[] = {2,4,5,9,10};
    int n = 5;
    int target = 9;
    bool f = isThere(arr, n, target);
    cout << f;
}