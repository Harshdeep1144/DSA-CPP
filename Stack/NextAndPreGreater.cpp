#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 6, 2, 1, 5, 8, 3, 1};
    int n = arr.size();
    
    vector<int> preGreater(n, -1);
    vector<int> nextGreater(n, -1);

    stack<int> st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }
        if(!st.empty()){
            preGreater[i] = st.top();
        }
        st.push(arr[i]);
    }

    while(!st.empty()){
        st.pop();
    }

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() < arr[i]){
            st.pop();
        }
        if(!st.empty()){
            nextGreater[i] = st.top();
        }
        st.push(arr[i]);
    }


    cout << "Next Greater Element: ";
    for(int val : nextGreater){
        cout << val << " ";
    }
    cout << endl;

    cout << "Previous Greater Element: ";
    for(int val : preGreater){
        cout << val << " ";
    }

    return 0;
}