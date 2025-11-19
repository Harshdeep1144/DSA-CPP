#include <iostream>
using namespace std;

int main(){

    pair<int, int> p = {1,2};
    cout << p.first << " " << p.second << " ";

    // nested pair
    pair< int, pair<int, int>> np = {1, {2,3}};
    cout << np.first << " " << np.second.first << " " << np.second.second;

    pair<int, int> arr[] = {{1,2},{2,3},{3,4}};
    cout << arr[1].second;
    

    return 0;
}
