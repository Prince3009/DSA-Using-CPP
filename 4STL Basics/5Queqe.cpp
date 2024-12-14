#include<bits/stdc++.h>
using namespace std;
// A queue is a container adapter provided by the C++ Standard Template Library (STL).
// Features of queues:
// 1. Queues follow the FIFO (First In, First Out) principle.
//    - Elements are added at the back and removed from the front.
// 2. Direct access to elements in the middle is not allowed.
// 3. Useful member functions include:
//    - push(value): Adds an element to the back of the queue.
//    - pop(): Removes the element from the front of the queue.
//    - front(): Returns the element at the front.
//    - back(): Returns the element at the back.
//    - empty(): Checks if the queue is empty.
//    - size(): Returns the number of elements in the queue.
// 4. Queues are useful in scenarios like task scheduling, breadth-first search (BFS), and buffering.
// Example: queue<int> q; // Creates an empty queue of integers

void explainQueue(){
    queue<int> q;
    q.push(1);         //{1}
    q.push(2);         //{1, 2}
    q.push(3);         //{1, 2, 3}
    q.emplace(5);      //{1, 2, 3, 5}

    q.back() += 5;                       //{1, 2, 3, 10}
    cout << q.back() << endl;            //Output: 10     

    q.front() *= 2;                       //{2, 2, 3, 10}
    cout << q.front() << endl;            //Output: 2

    cout << q.size() << endl;             //4
    cout << q.empty() << endl;            //0

    q.pop();                              //{2, 2, 3}

}

int main() {
    explainQueue();
    return 0;
}