#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Optimized Bubble Sort - (if the arr is already sorted don't run the entire loop)

void bubbleSortOptimized(vector<int> &arr){
    int n = arr.size();
    bool isSwapped = false;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j+1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                isSwapped = true;
            }
        }

        if(isSwapped == false) break;
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
    vector<int> nums = {3, 5, 0, 45, 1, 9};

    bubbleSort(nums);
    display(nums);

    bubbleSortOptimized(nums);
    display(nums);

    return 0;
}