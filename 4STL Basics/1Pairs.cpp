#include<bits/stdc++.h>
using namespace std;
// a pair is a container provided by the Standard Template Library (STL) to store two values together. These values can be of the same or different data types. Pairs are useful when you want to group two logically related values
void explainPairs(){
pair<int, int> p1 = {1, 3};
cout << p1.first << " " << p1.second << endl;           // Output: 1 3

pair<int, pair<int, int>> p2= {1, {2, 3}};
cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;       // Output: 1 2 3

pair <int, int> arr[] = {{1,3}, {2,4}, {5,6}};
cout << arr[0].first << " " << arr[1].second << " " << arr[2].second <<  endl;      // Output: 1 4 6

pair<int, string> p3 = {1, "Prince"};
cout << p3.first << " " << p3.second << endl;           // Output: 1 Prince
}

int main() {
    explainPairs();
}