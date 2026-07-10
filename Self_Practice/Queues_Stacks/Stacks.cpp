#include <iostream>
#include <vector>
using namespace std;

void push(vector<int> &st, int &top, int val){
    top++;
    st.push_back(val);
}

void pop(vector<int> &st, int &top){
    if(top == -1){
        cout << "Stack Underflow" << endl;
        return;
    }
    top--;
    st.pop_back();
}

bool isEmpty(int &top){
    return (top == -1);
}

int peek(vector<int> &st, int &top){
    if(top > -1) return st[top];
    else return -1;
}

void print(vector<int> &st){
    for(int i = 0; i < st.size(); i++){
        cout << st[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> st;
    int top = -1;

    push(st, top, 5);
    push(st, top, 10);
    push(st, top, 12);
    push(st, top, 20);
    print(st);
    cout << endl;
    int high = peek(st, top);
    cout << high << endl;

    pop(st, top);
    high = peek(st, top);
    cout << high << endl;
    cout << endl;
    print(st);
}