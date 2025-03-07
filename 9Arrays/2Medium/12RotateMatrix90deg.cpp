/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example 1:
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
*/


#include<bits/stdc++.h>
using namespace std;


//   //Brute force approach with spavce complexity O(n^2)
// void rotate(vector<vector<int>>& matrix){
//     int n = matrix.size();
//     vector<vector<int>> result(n, vector<int>(n));

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             result[j][n-1-i] = matrix[i][j];
//         }
//     }
//     matrix = result;
// }


//Optimal approach
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    //For finding transpose of the matrix
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    //Reversing values of each row
    for(int i = 0; i < n; i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main(){
    int n; 
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix
    rotate(matrix);

    // Output the rotated matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}