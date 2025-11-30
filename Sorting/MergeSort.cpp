#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int left, int right, int mid){
    vector<int> temp; 
    int i = left, j = mid+1;

    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= right){
        temp.push_back(arr[j]);
        j++;
    }
    
    for(int k = 0; k < temp.size(); k++){
        arr[left + k] = temp[k];   
    }
    // Using 'left + k' since its not necessary that the arr starts from 0 index
}


void mergeSort(vector<int> &arr, int left, int right){
    if(left >= right) return;
    
    int mid = left + (right-left) / 2;

    mergeSort(arr, left, mid);              // Left half 
    mergeSort(arr, mid + 1, right);         // Right half

    merge(arr, left, right, mid);
}


int main()
{
    vector<int> nums = {5, 1, 7, 2, 10, 0};

    mergeSort(nums, 0, nums.size() - 1);

    for(int num : nums){
        cout << num << " ";
    }

    return 0;
}