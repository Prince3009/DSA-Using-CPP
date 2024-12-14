#include<bits/stdc++.h>
using namespace std;
// A stack is a container adapter provided by the C++ Standard Template Library (STL).
// Features of stacks:
// 1. Stacks follow the LIFO (Last In, First Out) principle.
//    - The last element added to the stack is the first one to be removed.
// 2. Elements can only be added or removed from the top of the stack.
// 3. Useful member functions include:
//    - push(value): Adds an element to the top of the stack.
//    - pop(): Removes the element from the top of the stack.
//    - top(): Returns the top element of the stack.
//    - empty(): Checks if the stack is empty.
//    - size(): Returns the number of elements in the stack.
// 4. Stacks are useful for tasks like expression evaluation, backtracking, and function call management.
// Example: stack<int> stk; // Creates an empty stack of integers
void explainStack(){
    stack<int> st;
    st.push(10);          // {10}
    st.push(20);          // {10, 20}
    st.push(30);          // {10, 20, 30}
    st.emplace(50);       // {50, 10, 20, 30}
    st.pop();            // {10, 20, 30}

    cout << "Stack size: " << st.size() << endl;

    cout << "Top element: " << st.top() << endl; // prints 30

    st.pop();            // {10, 20}
    st.pop();            // {10}

    cout << st.empty() << endl;         //returns 0 beacuse the stack is not empty
}

int main(){
    explainStack();
    return 0;
}