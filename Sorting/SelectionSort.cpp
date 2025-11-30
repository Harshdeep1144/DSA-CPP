#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &arr){
    int n = arr.size();

    for(int i = 0; i < n-1; i++){
        int minIdx = i;         // Start of unsorted part 

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        if(minIdx != i){
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
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
    vector<int> nums = {3,46,2,0,10,1};

    SelectionSort(nums);
    display(nums);

    return 0;
}