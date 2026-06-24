#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1) return true;
    return arr[n - 1] > arr[n - 2] && isSorted(arr, n - 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    bool ch = isSorted(arr, n);
    cout << ch;
}