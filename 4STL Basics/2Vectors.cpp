// A vector is a dynamic array provided by the C++ Standard Template Library (STL).
// Features of vectors:
// 1. Vectors can grow or shrink in size dynamically.
// 2. They allow random access to elements using an index, like arrays.
// 3. Useful member functions include:
//    - push_back(value): Adds an element to the end.
//    - emplace_back(value): Constructs an element in place at the end.
//    - size(): Returns the number of elements in the vector.
//    - capacity(): Returns the total memory allocated for the vector.
// 4. Vectors are memory-efficient and highly flexible compared to static arrays.
// Example: vector<int> vec; // Creates an empty vector of integers

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v ;
    v.push_back(10);       // Adds 10 to the vector
    v.emplace_back(20);    // Adds 20 to the vector (similar to push_back but more efficient for direct object construction)

    vector<pair<int,int>> vec;
    vec.push_back({1,2});        // Adds a pair (1,2) to the vector
    vec.emplace_back(3,4);       //Constructs an element directly in place at the end of the vector, potentially more efficient than push_back when creating new objects

    vector <int> v1(5, 100);    // Creates a vector of size 5, where each element is initialized to 100

    vector <int> v2(5);       // Creates a vector of size 5, where each element is default-initialized to 0
                              // It depends on compiler if the value is 0 or any garbage value

    vector <int> v3(4, 20);       
    vector <int> v4(v3);              //Copying the values of v3 into v4 

    //For accessing the vector
    cout << v[0] << endl;              // Prints 10
    cout << v.back() << endl;         // Prints last value of vector 20
    
    //For iterating over the vector
    for(int i : v){
        cout << i << " ";              //Prints 10 20
    }
    cout << endl;

    //Another way
    vector<int>::iterator it = v1.begin();     //points to the memory address of the first value
    it+2;                                      //it+2 will point to the third value           
    cout << *it << " \n";                        // Prints 100

    vector<int>::iterator it2 = v1.end();     //it will point the the memory address just after the last value
    it2--;                                    //using it2-- so that it can reach to the last value
    cout << *it2 << " \n";  

    
    vector<int> vec2;
    vec2.push_back(1);
    vec2.emplace_back(2);
    vec2.emplace_back(4);
    vec2.emplace_back(9);
    vec2.emplace_back(8);
    for(auto i : vec2){
        cout << i << " ";           //Output: 1 2 4 9 8
    }
    cout << endl;
    
    //Erasing the values from vector
    vec2.erase(vec2.begin());          //deletes the first value

    vec2.erase(vec2.begin()+2, vec2.begin()+3);   //deletes the value from index 3 to index 4

    cout << vec2.size() << endl;         //prints the size of the vector


    //Insert function
    vector<int> vec3(2, 100);
    vec3.insert(vec3.begin(), 50);    // Output: 50 100 100
    vec3.insert(vec3.begin()+2, 30);  // Output: 50 100 30 100
    vec3.insert(vec3.begin()+1, 40, 50);  // Output: 50 40 50 100 30 100

    vec3.pop_back();        //pops back the last element

    vec3.clear();           //erases the whole vector
    
    cout << vec3.empty();     //returns 1 because the vector is empty

    vec3.swap(vec2);          //swaps the value vec2->vec3 and vec3->vec2


    
}