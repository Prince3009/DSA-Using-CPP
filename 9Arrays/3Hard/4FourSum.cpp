/*
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n = arr.size(); 
        vector<vector<int>> ans; // To store the final quadruplets

        sort(arr.begin(), arr.end()); // Sort the array to handle duplicates easily
        
        // First loop to fix the first element of the quadruplet
        for(int i = 0; i < n; i++) {
            // Avoid duplicate elements for 'i'
            if(i > 0 && arr[i] == arr[i-1]) continue;
            
            // Second loop to fix the second element of the quadruplet
            for(int j = i+1; j < n; j++) {
                // Avoid duplicate elements for 'j'
                if(j > i+1 && arr[j] == arr[j-1]) continue;
                
                int k = j+1, l = n-1; // Two-pointer approach for remaining two elements
                
                // Finding pairs with two-pointer approach
                while(k < l) {
                    long long sum = (long long)arr[i] + arr[j] + arr[k] + arr[l]; // Use long long to prevent integer overflow

                    if(sum < target) {
                        k++; // Move left pointer forward to increase sum
                    } 
                    else if(sum > target) {
                        l--; // Move right pointer backward to decrease sum
                    } 
                    else { // If sum == target, store the quadruplet
                        ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                        k++;
                        l--;

                        // Skip duplicate elements for 'k' and 'l'
                        while(k < l && arr[k] == arr[k-1]) k++; 
                        while(k < l && arr[l] == arr[l+1]) l--; 
                    }
                }
            }
        }
        return ans; 
    }
};

int main() {
    Solution sol;
    
    int n, target;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> target;

    // Calling fourSum function
    vector<vector<int>> res = sol.fourSum(nums, target);

    for (auto quad : res) {
        cout << "[";
        for (int i = 0; i < quad.size(); i++) {
            cout << quad[i] << (i < quad.size() - 1 ? ", " : "");
        }
        cout << "]\n";
    }

    return 0; 
}
