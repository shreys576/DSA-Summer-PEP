#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(12);
    arr.push_back(13);
    arr.push_back(1);
    arr.push_back(9);
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
    cout << arr.size() << endl;
    arr.pop_back();
    cout << arr.size() << endl;
    arr.clear();
    cout << arr.size() << endl;
}