#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int st, int end){
    int idx = -1, pivotIdx = end;

    for(int j = 0; j < end; j++){
        if(arr[j] < arr[pivotIdx]){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }

    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}


void quickSort(vector<int> &arr, int st, int end){
    if(st >= end) return;

    int pivotIdx = partition(arr, st, end);
    quickSort(arr, st, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, end);
}


void display(vector<int> &arr){
    cout << "The array values are: " << endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    vector<int> nums = {23,4,3,5,0,10};

    quickSort(nums, 0, nums.size()-1);
    display(nums);


    return 0;
}