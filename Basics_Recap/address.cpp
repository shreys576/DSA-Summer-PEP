#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;

    // '&' is used as reference to get the address of a variable, so if we have a and we use &a we get the address of a therefore &b also stores the same value that is in a, i.e., 10
}