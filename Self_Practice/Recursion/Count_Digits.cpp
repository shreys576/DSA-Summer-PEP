#include <iostream>
using namespace std;

int CountDigits(int num){
    if(num < 10) return 1;
    return 1 + CountDigits(num / 10);
}

int main(){
    int n = 1234;
    int f = CountDigits(n);
    cout << f << endl;
}