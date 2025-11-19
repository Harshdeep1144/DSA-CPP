#include <iostream>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <algorithm>
using namespace std;

void explainList()
{
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    ls.push_front(3);
    ls.emplace_front(4);

    // rest function are same as of vectors
    // begin, insert, end, rbegin, rend, clear, size, swap
}

void explainDeque()
{
    deque<int> dq;

    dq.push_back(1);
    dq.emplace_back(2);

    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();
}

void explainStack()
{
    stack<int> st;

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.emplace(1); // Similar to push

    st.pop();

    cout << st.top();
    cout << st.size();
    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4); // Similar as push

    q.back() += 5; // 4 + 5 = 9

    cout << q.back();
    cout << q.front();
    q.pop();
    cout << q.front();
}

void explainPQ()
{
    // Max-Heap (default)
    priority_queue<int> pq;

    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.emplace(10);

    cout << "Max-Heap Top = " << pq.top() << endl; // 10 (largest element)

    pq.pop();                                        // removes 10
    cout << "After pop, Top = " << pq.top() << endl; // 5

    // Min-Heap
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);
    pq2.push(1);
    pq2.push(8);
    pq2.emplace(0);

    cout << "Min-Heap Top = " << pq2.top(); // 0 (smallest element)
}

void explainSet()
{
    // Sorted and Unique
    set<int> st;

    st.insert(1);
    st.emplace(2);
    st.insert(2); // Does affect because set has unique and sorted elements only
    st.insert(4);
    st.insert(3);

    auto it1 = st.find(3);  // Returns the location of the element i.e iterator
    auto it2 = st.find(10); // IF the element is not found the iterator points jjust after the last element

    int cnt = st.count(1); // To check the existence of an element

    st.erase(3);
    // or
    st.erase(it1);

    auto it3 = st.find(2);
    auto it4 = st.find(4);

    st.erase(it3, it4);
}

void explainMultiSet()
{
    // Everything is same as set
    // Except it can store duplicate elements also

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.count(1);
    ms.erase(1);

    // Only the single element is erase
    ms.erase(ms.find(1));
}

void explainUSet()
{
    // Can have any order
    // But unique elements

    unordered_set<int> us;
}

void explainMap()
{
    // Key value pairs i.e map<key, value>
    // Key must be unique
    // Keys are always sorted

    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 5;
    mpp.emplace(3, 8);
    mpp.insert({2, 3});
    mpp.find(1);

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];

    mpp3[{2, 3}] = 10;
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;

    if (p1.first < p2.first)
        return false;
    else
        return true;
}

void explainExtra()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(3);
    v.push_back(10);

    sort(v.begin(), v.end());
    // descending order
    sort(v.begin(), v.end(), greater<int>());

    for (auto x : v)
        cout << x << " ";

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = 3;

    // sort it according to second element
    // if second element is same, then
    //  sort it according to the first element but in decending order

    sort(a, a + n, comp); // comp is defined above

    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second << endl;
    }

    int num = 7;
    int cnt = __builtin_popcount(num);         // counts number of 1s in binary
    cout << "No. of 1s in "<< num << " are: " << cnt << endl;
    

    string s = "321";
    sort(s.begin(), s.end());           // sort to get all the permutations

    cout << "Permutations of " << s << " are: " << endl;
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));
    
    // int maxi = *max_element(a, a+n);
}

int main()
{

    explainExtra();
    return 0;
}