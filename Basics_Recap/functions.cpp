#include <iostream>
using namespace std;

void func1(int num){
    cout << "value of num is " << num << endl;

    // this is a void function so if we print something it will print but that's it nothing else will happen as it will not return anything at all
}

int func2(int num){
    int ans = 2 * num;
    cout << "This is in the body of func2" << endl;
    return ans;

    // this is a proper function that returns something, in main function in order to see this output value in console we either use a cout function in main or store it in a variable in main
    // cout statements will not be executed in function if it is after return, therefore if you want to print something, write it in the function before the return statement
}

int main(){
    int num = 5;
    func1(num);
    cout << func2(num) << endl;
    int a = func2(10);
    cout << a << endl;
}