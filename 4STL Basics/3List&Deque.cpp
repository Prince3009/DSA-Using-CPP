#include<bits/stdc++.h>
using namespace std;
//Same as Vectors, but list allows elements to enter in the front also (all operations will be applicable)
// A list is a doubly linked list provided by the C++ Standard Template Library (STL).
// Features of lists:
// 1. Lists are dynamic, allowing easy insertion and deletion of elements at both ends or in the middle.
// 2. Unlike vectors, lists do not provide random access. They are sequentially accessed.
// 3. Useful member functions include:
//    - push_back(value): Adds an element to the end.
//    - push_front(value): Adds an element to the beginning.
//    - insert(iterator, value): Inserts an element at a specified position.
//    - erase(iterator): Removes an element at a specified position.
// 4. Lists are efficient when frequent insertions or deletions are required.
// Example: list<int> lst; // Creates an empty list of integers

void explainList(){
    list<int> l;
    l.push_back(10);               // {10}
    l.emplace_back(20);            // {10, 20}
    l.push_front(25);              // {25, 10, 20}
    l.emplace_front(46);           // {46, 25, 10, 20}
    cout << "List: ";
    for(int i : l){
        cout << i << " ";           // Prints 46 25 10 20
    }
    cout << endl;
}


//// A deque (double-ended queue) is a dynamic array provided by the C++ Standard Template Library (STL).
// Features of deques:
// 1. Deques allow fast insertion and deletion of elements at both the front and back.
// 2. Random access is supported, similar to vectors, using an index.
// 3. Useful member functions include:
//    - push_back(value): Adds an element to the end.
//    - push_front(value): Adds an element to the beginning.
//    - pop_back(): Removes an element from the end.
//    - pop_front(): Removes an element from the beginning.
//    - size(): Returns the number of elements in the deque.
// 4. Deques are memory-efficient and flexible when frequent operations are needed at both ends.
// Example: deque<int> dq; // Creates an empty deque of integers

void explainDeque(){
    deque<int> dq;
    dq.push_back(10);               // {10}
    dq.push_front(25);              // {25, 10}
    dq.pop_back();                  // {25}
    dq.pop_front();                 // {}
    dq.push_back(30);               // {30}
    dq.push_front(46);              // {46, 30}
    cout << "Deque: ";
    for(int i : dq){
        cout << i << " ";           // Prints 46 30
    }
    
    cout << endl;
    cout << "Size of deque: " << dq.size() << endl; // Prints Size of deque: 2
}
int main(){
    explainList();
    explainDeque();
}