#include<bits/stdc++.h>
using namespace std;
// A priority queue is a container adapter provided by the C++ Standard Template Library (STL).
// Features of priority queues:
// 1. A priority queue is a specialized queue where elements are stored in a specific priority order.
//    - By default, the largest element (max-heap) is at the top.
//    - You can create a min-heap by using a custom comparator.
// 2. Elements cannot be accessed in sequence; only the top (highest-priority) element can be accessed.
// 3. Useful member functions include:
//    - push(value): Adds an element to the priority queue.
//    - pop(): Removes the top (highest-priority) element.
//    - top(): Returns the top element (highest priority).
//    - empty(): Checks if the priority queue is empty.
//    - size(): Returns the number of elements in the priority queue.
// 4. Priority queues are useful in algorithms like Dijkstra's shortest path, Huffman coding, etc.
// Example:
//    priority_queue<int> pq;                     // Max-heap (default)
//    priority_queue<int, vector<int>, greater<int>> pq; // Min-heap

void explainPQ(){
    //Max Heap Priority - greatest element will be places at top
    priority_queue<int> pq;
    pq.push(10);            //{10}
    pq.push(5);             //{10, 5}
    pq.push(8);             //{10, 8, 5}
    pq.emplace(2);             //{10, 8, 5, 2}

    cout << "Top element: " << pq.top() << endl;           //Top element is 10


    //Min heap priority - smallest element will be places at top
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(10);            //{10}
    pq2.push(5);             //{5, 10}
    pq2.push(8);             //{5, 8, 10}
    pq2.emplace(2);          //{2, 5, 8, 10}

    cout << "Top element: " << pq2.top() << endl;           //Top element is 10
}

int main(){
    explainPQ();
    return 0;
}