#include <bits/stdc++.h>
using namespace std;

// A map is an associative container provided by the C++ Standard Template Library (STL).
// Features of maps:
// 1. A map stores key-value pairs in **sorted order** (by key in ascending order by default).
//    - Each key in a map is **unique**.
// 2. It uses a **balanced binary search tree** (like a Red-Black Tree) internally, ensuring **O(log n)** complexity for insertion, deletion, and search operations.
// 3. Useful member functions include:
//    - insert({key, value}): Inserts a key-value pair into the map (if the key is not already present).
//    - emplace(key, value): More efficient than insert for constructing elements in-place.
//    - erase(key): Removes a key-value pair from the map (if the key exists).
//    - find(key): Returns an iterator to the element if found, or end() if not found.
//    - count(key): Returns 1 if the key exists, otherwise 0 (since duplicates aren't allowed).
//    - size(): Returns the number of key-value pairs in the map.
//    - empty(): Checks if the map is empty.
// 4. Maps are useful for **fast lookups, maintaining key-value relationships, and ordered storage**.
// Example:
//    map<int, string> mp; // Creates an empty map with int keys and string values
//    mp.insert({1, "Apple"}); mp.insert({2, "Banana"}); // mp = { {1, "Apple"}, {2, "Banana"} }

void explainMap() {
    map<int, int> mp;
    mp.insert({1, 10});  // {1 → 10}
    mp.insert({2, 20});  // {1 → 10, 2 → 20}
    mp[3] = 30;          // {1 → 10, 2 → 20, 3 → 30} (Another way to insert)

    mp.emplace(4, 40);   // {1 → 10, 2 → 20, 3 → 30, 4 → 40}

    // Accessing values
    cout << "Value at key 3: " << mp[3] << endl;  // Output: 30

    // Searching for a key
    auto it = mp.find(2);
    if (it != mp.end()) {
        cout << "Found key 2 with value: " << it->second << endl;
    } else {
        cout << "Key 2 not found!" << endl;
    }

    // Erasing an element
    mp.erase(3);  // Removes the key 3 from the map

    // Iterating over the map
    cout << "Map contents: ";
    for (auto& [key, value] : mp) {
        cout << key << " → " << value << "  ";
    }
    cout << endl;

    // Counting the presence of a key
    int count = mp.count(2);  // Returns 1 because key 2 exists
    int count2 = mp.count(5); // Returns 0 because key 5 does not exist
    cout << "Count of 2: " << count << " and Count of 5: " << count2 << endl;
}

// A multimap is an associative container provided by the C++ Standard Template Library (STL).
// Features of multimaps:
// 1. A multimap stores key-value pairs in **sorted order** (by key in ascending order by default).
//    - Unlike a map, **duplicate keys are allowed**.
// 2. It uses a **balanced binary search tree** (like a Red-Black Tree) internally, ensuring **O(log n)** complexity for insertion, deletion, and search operations.
// 3. Useful member functions include:
//    - insert({key, value}): Inserts a key-value pair into the multimap (allows duplicate keys).
//    - emplace(key, value): More efficient than insert for constructing elements in-place.
//    - erase(key): Removes all pairs with the given key.
//    - find(key): Returns an iterator to the first occurrence of the key, or end() if not found.
//    - count(key): Returns the number of times a key appears in the multimap.
//    - size(): Returns the total number of key-value pairs in the multimap (including duplicates).
//    - empty(): Checks if the multimap is empty.
// 4. Multimaps are useful when you need **sorted key-value pairs with duplicate keys**, such as frequency counts or grouped data.
// Example:
//    multimap<int, string> mmp; // Creates an empty multimap with int keys and string values
//    mmp.insert({1, "Apple"}); mmp.insert({1, "Orange"}); // mmp = { {1, "Apple"}, {1, "Orange"} }

void explainMultimap() {
    multimap<int, int> mmp;
    mmp.insert({1, 10});  // {1 → 10}
    mmp.insert({2, 20});  // {1 → 10, 2 → 20}
    mmp.insert({1, 15});  // {1 → 10, 1 → 15, 2 → 20} (Duplicates allowed)

    mmp.emplace(3, 30);   // {1 → 10, 1 → 15, 2 → 20, 3 → 30}

    // Accessing values
    cout << "Multimap contents: ";
    for (auto& [key, value] : mmp) {
        cout << key << " → " << value << "  ";
    }
    cout << endl;

    // Finding the first occurrence of key 1
    auto it = mmp.find(1);
    if (it != mmp.end()) {
        cout << "First occurrence of key 1: " << it->second << endl;
    }

    // Counting occurrences of a key
    cout << "Count of key 1: " << mmp.count(1) << endl;

    // Erasing all occurrences of a key
    mmp.erase(1);  // Removes all pairs with key 1

    cout << "Multimap after erasing key 1: ";
    for (auto& [key, value] : mmp) {
        cout << key << " → " << value << "  ";
    }
    cout << endl;
}

// Unordered map - Similar to a map, but stores values in an unordered manner.
// 1. It allows unique keys like a regular map but does **not** maintain any particular order.
// 2. Internally uses **hash tables**, ensuring **O(1) average time complexity** for insertion, deletion, and lookup.
// 3. **Drawback:** The order of elements is **not sorted**, so iteration does not guarantee sorted keys.

void explainUnorderedMap() {
    unordered_map<int, int> ump;
    ump[1] = 10;
    ump[2] = 20;
    ump[3] = 30;
    ump[4] = 40;

    cout << "Unordered Map contents: ";
    for (auto& [key, value] : ump) {
        cout << key << " → " << value << "  ";
    }
    cout << endl;
}

int main() {
    cout << "----- Map -----\n";
    explainMap();
    cout << "\n----- Multimap -----\n";
    explainMultimap();
    cout << "\n----- Unordered Map -----\n";
    explainUnorderedMap();
    return 0;
}
