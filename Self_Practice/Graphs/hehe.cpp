#include <iostream>
#include <stack>

using namespace std;

string reverseWord(string s){
    stack<string> st;
    string temp = "";
    for(auto i : s){
        if(i == ' '){
            if(temp.length() > 0){
                st.push(temp);
                temp = "";
            }
        }
        else{
            temp += i;
        }
    }
    if(temp.length() > 0) st.push(temp);
    string res = "";
    while(!st.empty()){
        res += st.top();
        st.pop();
        if(!st.empty()){
            res += " ";
        }
    }
    return res;
}


int main(){
    string s = "The sky is blue";
    string res = reverseWord(s);
    cout << res << endl;

}