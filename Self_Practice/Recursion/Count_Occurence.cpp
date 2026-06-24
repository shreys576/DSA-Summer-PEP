#include <iostream>
using namespace std;

int countOccurrence(int arr[], int n, int target){
    if(n == 0) return 0;
    return (arr[n - 1] == target? 1 : 0) + countOccurrence(arr, n - 1, target);
}

int main(){
    int arr[] = {1, 2, 1, 4, 1, 1, 5};
    int n = 7;
    int target = 1;
    int c = countOccurrence(arr, n , target);
    cout << c;

}