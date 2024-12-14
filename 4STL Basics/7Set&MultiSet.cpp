#include<bits/stdc++.h>
using namespace std;
// A set is an associative container provided by the C++ Standard Template Library (STL).
// Features of sets:
// 1. A set stores unique elements in sorted order (ascending by default).
//    - Duplicate elements are not allowed in a set.
// 2. It uses a balanced binary search tree (like Red-Black Tree) internally, ensuring O(log n) complexity for insertion, deletion, and search operations.
// 3. Useful member functions include:
//    - insert(value): Inserts a value into the set (if it's not already present).
//    - erase(value): Removes a value from the set (if it exists).
//    - find(value): Returns an iterator to the element if found, or end() if not found.
//    - count(value): Returns 1 if the value exists, otherwise 0 (since duplicates aren't allowed).
//    - size(): Returns the number of elements in the set.
//    - empty(): Checks if the set is empty.
// 4. Sets are useful for maintaining unique elements and efficiently performing search operations.
// Example: 
//    set<int> s; // Creates an empty set of integers
//    s.insert(10); s.insert(20); s.insert(10); // s = {10, 20} (duplicates are ignored)

void explainSet(){
    set<int> st;
    st.insert(10);    //{10}
    st.insert(20);    //{10, 20}
    st.insert(10);    //{10, 20}           //10 is not added because the number should be unique
    st.emplace(35);    //{10, 20, 35}
    st.insert(5);      //{5, 10, 20, 35}      //5 is in top because the set will be in sorted form

    auto it = st.find(10);
    cout << *it << endl;

    auto it2 = st.find(25);           //Since, 25 is not in the stack so it will return total size
    cout << *it2 << endl;

    st.erase(35);         //deletes 35 from the set
    for(int i : st){
        cout << i << " ";           // 5 10 20
    }
    cout << endl;

    int count = st.count(10);         //returns 1 because 10 is in the set
    int count2 = st.count(60);        //returns 0 because 60 is not in the set
    cout << "Count of 10: " << count << " and Count of 60: " << count2 << endl;

    auto it3 = st.find(5);
    auto it4 = st.find(20);
    st.erase(it3, it4);             //Output: 20      //{5, 10} will be erased
}



// A multiset is an associative container provided by the C++ Standard Template Library (STL).
// Features of multisets:
// 1. A multiset stores elements in sorted order (ascending by default).
//    - Unlike a set, it allows duplicate elements.
// 2. It uses a balanced binary search tree (like Red-Black Tree) internally, ensuring O(log n) complexity for insertion, deletion, and search operations.
// 3. Useful member functions include:
//    - insert(value): Inserts a value into the multiset (duplicates are allowed).
//    - emplace(value): Inserts a value more efficiently than insert.
//    - erase(value): Removes all occurrences of a value, or a specific one using an iterator.
//    - find(value): Returns an iterator to the first occurrence of the element, or end() if not found.
//    - count(value): Returns the number of occurrences of the given value.
//    - size(): Returns the total number of elements in the multiset (including duplicates).
//    - empty(): Checks if the multiset is empty.
// 4. Multisets are useful when you need sorted data with duplicates, such as frequency counts or ranges.
// Example:
//    multiset<int> ms;  // Creates an empty multiset of integers
//    ms.insert(10); ms.insert(20); ms.insert(10); // ms = {10, 10, 20} (duplicates are stored)

void explainMultiset(){
    multiset<int> ms;
    ms.insert(10);    //{10}
    ms.insert(20);    //{10, 20}
    ms.insert(10);    //{10, 10, 20}           //10 is added because multiset allows duplicates
    ms.emplace(35);    //{10, 10, 20, 35}
    ms.insert(5);      //{5, 10, 10, 20, 35}      //5 is in top because multiset will be in sorted form
    ms.insert(10);    //{5, 10, 10, 10, 20, 35}     //10 is added again because multiset allows duplicates

    //ms.erase(10);                  //deletes all 10's        //5 20 35

    //ms.erase(ms.find(10));           //deletes first 10 only     //5 10 10 20 35

    ms.erase(ms.find(10), next(ms.find(10), 2));             // Deletes the first two occurrences of 10

    ms.erase(ms.find(10), next(ms.find(10), 3));             // Deletes the first three occurrences of 10

    ms.erase(ms.find(10), next(ms.find(20)));          // 5 35

    ms.erase(ms.find(10), ms.find(20));                // 5 20 35

    for(int i : ms){
        cout << i << " ";           // 5 10 20 35
    }
    cout << endl;
}


//Unordered set - Same as set, the values should be unique but the only difference is the values stored are not in sorted form, all the values are in randomized form

int main(){
    explainSet();
    explainMultiset();
    return 0;
}