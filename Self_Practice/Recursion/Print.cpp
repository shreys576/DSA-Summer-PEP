#include <iostream>
using namespace std;

void Print(int arr[], int n){
    if(n == 0){
        return;
    }
    Print(arr, n - 1);
    cout << arr[n - 1] << " ";
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    Print(arr,n);
}