#include <bits/stdc++.h>
using namespace std;

void ArrayInput_2D(vector<vector<int>> &arr, int m, int n) {
    cout << "Enter the elements of the array\n";

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter the element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
}

void PrintArray_2D(const vector<vector<int>> &arr, int m, int n) {
    cout << "\nArray elements:\n";
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    ArrayInput_2D(arr, m, n);
    PrintArray_2D(arr, m, n);

    return 0;
}
