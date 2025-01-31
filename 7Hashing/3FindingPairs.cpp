
#include <bits/stdc++.h>
using namespace std;

bool hasPairWithSum(vector<int> &arr, int target) {
    unordered_set<int> hash;
    for (int num : arr) {
        //num + other_num = target         => other_num = target - num
        if (hash.count(target - num)) return true;  // Pair found
        hash.insert(num);
    }
    return false;
}

int main() {
    vector<int> arr = {2, 9, 11, 15};
    int target = 9;
    cout << (hasPairWithSum(arr, target) ? "Pair Exists" : "No Pair") << endl;
}