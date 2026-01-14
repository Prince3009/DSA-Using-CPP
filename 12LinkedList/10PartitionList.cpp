/* 
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Input: head = [1,4,3,2,5,2], x = 3
Output: [1,2,2,4,3,5]

Input: head = [2,1], x = 2
Output: [1,2]
*/

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = nullptr;
    }
};


Node* partition(Node* head, int x) {
    if (head == nullptr) return nullptr;

    // Dummy heads to simplify handling of before/after lists
    Node* beforeHead = new Node(0);
    Node* afterHead = new Node(0);

    Node* before = beforeHead;
    Node* after = afterHead;

    Node* curr = head;
    while (curr != nullptr) {
        if (curr->val < x) {
            before->next = curr;   // attach to "before" list
            before = before->next;
        } else {
            after->next = curr;    // attach to "after" list
            after = after->next;
        }
        curr = curr->next;
    }

    after->next = nullptr;               // terminate after list
    before->next = afterHead->next;      // connect before -> after

    Node* newHead = beforeHead->next;

    delete beforeHead;  // free dummy nodes
    delete afterHead;

    return newHead;
}

// Utility: print linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// Print linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Manually creating linked list: 1 -> 4 -> 3 -> 2 -> 5 -> 2
    Node* head = new Node(1);
    head->next = new Node(4);
    head->next->next = new Node(3);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(2);

    cout << "Original list: ";
    printList(head);

    int x = 3;
    head = partition(head, x);

    cout << "Partitioned list around " << x << ": ";
    printList(head);

    return 0;
}