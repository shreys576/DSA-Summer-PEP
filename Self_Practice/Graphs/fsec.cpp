#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(count = 0; count < n/2; count++){
        int lc = 0;
        for(lc = 0; lc < n/2; lc++){
            cout << " ";
        }
        cout << "*";
        lc++;
        for(lc; lc < n; lc++){
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        cout << "*";
    }
    cout << endl;
    count++;
    for(count; count < n; count++){
        int lc = 0;
        for(lc = 0; lc < n/2; lc++){
            cout << " ";
        }
        cout << "*";
        lc++;
        for(lc; lc < n; lc++){
            cout << " ";
        }
        cout << endl;
    }
}