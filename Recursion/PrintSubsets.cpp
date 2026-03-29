#include <bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &res, int i){
    if(i == arr.size()){
        for(int val : res){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    res.push_back(arr[i]);          // include the element
    printSubsets(arr, res, i+1);

    res.pop_back();                 // exclude the element - backtracking
    printSubsets(arr, res, i+1);
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> res;

    printSubsets(arr, res, 0);

    return 0;
}