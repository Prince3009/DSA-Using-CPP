/*
Given an m x n matrix, return all elements of the matrix in spiral order.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/



#include<bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;

    vector<int> result;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            result.push_back(matrix[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            result.push_back(matrix[i][right]);
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result = spiralMatrix(matrix);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}