#include <bits/stdc++.h>
using namespace std;

void ShellSort(vector<int> &arr){
    int n = arr.size();

    for(int gap = n/2; gap > 0; gap = gap/2){
        for(int  i = gap;  i < n; i++){
            int temp = arr[i];
            for(int j = i; j >= gap && arr[j-gap] > temp; j = j-gap){
                swap(arr[j], arr[j-gap]);
            }
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
    vector<int> nums = {3,5,6,0,25,1};

    ShellSort(nums);
    display(nums);
    
    return 0;
}