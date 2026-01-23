#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<char> st;
    unordered_map<char, char> mp;
    mp['{'] = '}';
    mp['('] = ')';
    mp['['] = ']';

    for(char ch : s){
           if(ch == '{' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else if(!st.empty() && mp[st.top()] == ch){
            st.pop();
        }
        else{
            return false;
        }
    }

    if(!st.empty()) return false;
    
    return true;
}

int main(){
    string str = "{()}";

    if(isValid(str)){
        cout << str << " is a valid parentheses" << endl;
    }else{
        cout << str << " is not a valid parentheses" << endl;
    }

    return 0;
}