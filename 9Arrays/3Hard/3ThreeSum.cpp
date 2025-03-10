/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.\

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
*/

#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> threeSum(vector<int>& arr) {
//     int n = arr.size();
//     set<vector<int>> st;
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             for(int k = j+1; k < n; k++){
//                 if(arr[i] + arr[j] + arr[k] == 0){
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }    
//     }
//     return vector<vector<int>>(st.begin(), st.end());
// }




// // Optimal approach - Two pointer approach
vector<vector<int>> threeSum(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> ans; 
    
    // Step 1: Sort the array to facilitate two-pointer approach
    sort(arr.begin(), arr.end());

    // Step 2: Iterate through the array to find unique triplets
    for(int i = 0; i < n; i++) {
        // Skip duplicate values for the first element of the triplet
        if(i > 0 && arr[i] == arr[i-1]) continue;
        
        int j = i + 1; // Left pointer
        int k = n - 1; // Right pointer

        // Step 3: Use two-pointer technique to find pairs that sum to -arr[i]
        while(j < k) {
            int sum = arr[i] + arr[j] + arr[k]; // Calculate the sum of the triplet
            
            if(sum < 0) {
                j++; // Increase left pointer to increase sum
            } 
            else if(sum > 0) {
                k--; // Decrease right pointer to decrease sum
            } 
            else {
                // Found a valid triplet
                ans.push_back({arr[i], arr[j], arr[k]});
                
                // Move both pointers to avoid duplicate triplets
                j++;
                k--;

                // Skip duplicate elements for the second number
                while(j < k && arr[j] == arr[j-1]) j++; 
                
                // Skip duplicate elements for the third number
                while(j < k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    
    // Print the result
    for (auto triplet : res) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i] << (i < triplet.size() - 1 ? ", " : "");
        }
        cout << "]\n";
    }

    return 0;
}