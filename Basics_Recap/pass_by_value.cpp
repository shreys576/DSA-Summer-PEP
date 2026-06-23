#include <iostream>
using namespace std;

void doubleTheNumber(int num){
    num *= 2;
    cout << "Inside the Function: " << num << endl;
}

int main(){
    int num = 10;

    doubleTheNumber(num);

    cout << "Outside the Function: " << num << endl;
}