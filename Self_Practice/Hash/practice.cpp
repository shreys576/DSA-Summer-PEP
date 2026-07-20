#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int, int> mp;

    for (int i = 0; i < 30; i++) mp[i] = i;
    mp[30] = 30;

    cout << mp.bucket_count() << endl;
    cout << mp.load_factor() << endl;
    cout << mp.max_load_factor() << endl;
}