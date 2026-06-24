#include <iostream>
using namespace std;

int FindMax(int arr[], int n){
    if(n == 0) return INT_MIN;
    return max(arr[n - 1], FindMax(arr, n - 1));
}

int main(){
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int f = FindMax(arr, n);
    cout << f;
}