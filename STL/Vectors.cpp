#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1,3,4,5};
    auto first = v.begin();

    // ---------------- Vector Creation ----------------
    vector<int> v1; // empty vector
    v1.push_back(1);
    v1.push_back(2);
    v1.emplace_back(3);

    vector<pair<int, int>> v2; // vector of pairs
    v2.push_back({1, 2});
    v2.emplace_back(2, 3);

    vector<int> v3(5, 20); // {20,20,20,20,20}
    vector<int> v4(5);     // {0,0,0,0,0}
    vector<int> v5(v3);    // copy of v3

    // ---------------- Access Elements ----------------
    cout << "v3[4] = " << v3[4] << endl;

    cout << "Values in vector v1 using both methods are: " << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " " ;
    }
    cout << endl;
    cout << "using second method";
    for(int val : v1){
        cout << val << " " ;
    }



    vector<int>::iterator it1 = v1.begin(); // points to first element
    cout << "First element (using begin) = " << *it1 << endl;

    vector<int>::iterator it2 = v1.end(); // points just after last element
    it2--;
    cout << "Last element (using end-1) = " << *it2 << endl;

    vector<int>::reverse_iterator rit1 = v1.rbegin(); // points to last element
    cout << "Last element (using rbegin) = " << *rit1 << endl;


    // ---------------- Traversal ----------------
    cout << "\nTraversal using iterators: ";
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Traversal using range-based for: ";
    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    // ---------------- Deletion ----------------
    v1.erase(v1.begin() + 1); // deletes 2nd element
    cout << "\nAfter erasing 2nd element: ";
    for (auto val : v1)
    {
        cout << val << " ";
    }
    cout << endl;

    // ---------------- Insertion ----------------
    v1.insert(v1.begin() + 1, 4);    // insert 4 at 2nd position
    v1.insert(v1.begin() + 1, 3, 7); // insert 7 ,  3 times at 2nd position
    v1.insert(v1.end(), v2.begin(), v2.end());    // concatenate v1 vector with v2 

    cout << "After insertions: ";
    for (auto val : v1)
        cout << val << " ";
    cout << endl;

    // ---------------- Other Utilities ----------------
    cout << "Size of v1 = " << v1.size() << endl;

    v1.pop_back(); // removes last element
    cout << "After pop_back: ";
    for (auto val : v1)
        cout << val << " ";
    cout << endl;

    // v1.swap(v3); // swap contents of v1 and v3

    // v1.clear(); // remove all elements

    if (v1.empty())
        cout << "v1 is empty" << endl;
    else
        cout << "v1 is not empty";
        
    return 0;
}
