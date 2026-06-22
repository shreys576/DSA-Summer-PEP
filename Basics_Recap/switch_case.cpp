#include <iostream>
using namespace std;

int main(){
    char grade = 'A';

    switch(grade){
        case 'A':
        cout << "Excellent" << endl;
        case 'B':
        cout << "Good" << endl;
        case 'C':
        cout << "Average" << endl;
        default:
        cout << "Invalid" << endl;
    }

    // Here all the cases will be printed, we need a break statement after each switch case

    switch(grade){
        case 'A':
        cout << "Excellent" << endl;
        break;
        case 'B':
        cout << "Good" << endl;
        break;
        case 'C':
        cout << "Average" << endl;
        break;
        default:
        cout << "Invalid" << endl;
    }

    // Adding break in default is not necessary because its supposed to be last

}
