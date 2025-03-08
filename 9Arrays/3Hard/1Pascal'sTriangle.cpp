#include<bits/stdc++.h>
using namespace std;

// //Type 1 : If the row and col is given then print the value (R = 5, C = 3)
// int printValue(int r, int c){
//     long long res = 1;
//     for(int i = 0 ; i < c; i++){
//         res = res * (r-i);
//         res = res/(i+1);
//     }
//     return res;
// }
// int main(){
//     int r, c;
//     cin >> r >> c;
//     cout << printValue(r, c) << endl;
// }




// //Type 2 : Print the nth row of the Pascal's triangle
// void printRow(int r, int c){
//     int ans  = 1; 
//     cout  << ans << " ";                //Print 1 because every row starts with 1
//     for(int i = 1; i < c; i++){
//         ans = ans * (r-i)/i;
//         cout << ans << " ";
//     }
// }

// int main(){
//     int n;
//     cin >> n;
//     printRow(n, n);          //Take same input because no. of rows = no. of columns
//     return 0;
// }




//Type 3 : Print the whole Pascal's Triangle 

#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));        //This will change the value in the above function every time
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}

