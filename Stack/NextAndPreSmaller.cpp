#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 6, 2, 1, 5, 6, 3, 1};
    int n = arr.size();
    
    vector<int> preSmaller(n, -1);
    vector<int> nextSmaller(n, -1);

    stack<int> st;

    for(int i = 0; i < n; i++){
        while(!st.empty() && st.top() > arr[i]){
            st.pop();
        }
        if(!st.empty()){
            preSmaller[i] = st.top();
        }
        st.push(arr[i]);
    }

    while(!st.empty()){
        st.pop();
    }

    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() > arr[i]){
            st.pop();
        }
        if(!st.empty()){
            nextSmaller[i] = st.top();
        }
        st.push(arr[i]);
    }


    cout << "Next Smaller Element: ";
    for(int val : nextSmaller){
        cout << val << " ";
    }
    cout << endl;

    cout << "Previous Smaller Element: ";
    for(int val : preSmaller){
        cout << val << " ";
    }

    return 0;
}