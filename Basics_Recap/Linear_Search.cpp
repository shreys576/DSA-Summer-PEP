#include <iostream>
#include <vector>
using namespace std;

int linerSearch(vector<int> &arr, int target){
    for(auto i : arr){
        if(i == target && i > 10){
            return i * 2;
        }
        else if(i == target && i <= 10){
            return i / 2;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11};
    int target = 12;
    int f = linerSearch(arr, target);
    cout << f;
}