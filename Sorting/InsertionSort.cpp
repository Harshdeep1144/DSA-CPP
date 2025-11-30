#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int j = i-1;        // For Previous values

        while(arr[j] > curr && j >= 0){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = curr;
    }
}

void display(vector<int> &arr){
    cout << "The array values are: " << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> nums = {3,5,6,0,25,1};

    insertionSort(nums);
    display(nums);
    
    return 0;
}