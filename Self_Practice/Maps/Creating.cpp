#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int>age;
    age["S"] = 20;
    age["V"] = 23;
    age["K"] = 22;
    age["A"] = 21;
    cout << age["V"] << endl;
    auto it = age.begin();
    cout << it -> first << " " << it -> second << endl;
    advance(it, 2);
    cout << it -> first << " " << it -> second << endl;
    
}