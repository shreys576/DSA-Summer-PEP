#include <iostream>
using namespace std;

int sum(int arr[], int n){
    if(n == 0) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int f = sum(arr,n);
    cout << f;
}