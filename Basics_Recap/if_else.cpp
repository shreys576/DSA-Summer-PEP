#include <iostream>
using namespace std;

int main(){
    cout << "Enter Age: ";
    int age;
    cin >> age;
    int number;
    cout << "Enter Number of Students: ";
    cin >> number;
    if(age >= 18 && number >= 10){
        cout << "Test will be conducted" << endl;
    }
    else{
        cout << "Test will not be conducted" << endl;
    }
}