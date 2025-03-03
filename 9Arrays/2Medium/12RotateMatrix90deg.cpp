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