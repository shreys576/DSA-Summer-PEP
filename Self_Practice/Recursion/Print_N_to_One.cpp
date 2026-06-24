#include <iostream>
using namespace std;

void Print(int num){
    if(num == 0) return;
    cout << num << " ";
    Print(num - 1);
}

int main(){
    int n = 5;
    Print(n);
}