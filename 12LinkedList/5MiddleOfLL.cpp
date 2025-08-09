#include <bits/stdc++.h>
using namespace std;

// Node class representing each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};


// ---------- Approach 1: Two-pass method using list length ----------

// Function to calculate the length of the linked list
int getLength(Node* head) {
    int len = 0;
    while (head != nullptr) {
        len++;
        head = head->next;
    }
    return len;
}

// Function to find the middle node using the length of the list
Node* middleNode_LengthBased(Node* head) {
    int len = getLength(head);

    // Middle position (second middle in even-length list)
    int midPos = (len / 2) + 1;

    Node* temp = head;
    int count = 1;

    // Traverse until we reach the middle position
    while (count < midPos) {
        temp = temp->next;
        count++;
    }

    return temp;
}



// ---------- Approach 2: Fast and Slow Pointer (one-pass) ----------

Node* middleNode_FastSlow(Node* head) {
    // If list has 0 or 1 node, return head itself
    if (head == nullptr || head->next == nullptr) return head;

    // If list has exactly 2 nodes, return the second (as per LeetCode)
    if (head->next->next == nullptr) return head->next;

    Node* slow = head;
    Node* fast = head->next;

    // Traverse the list: fast moves 2 steps, slow moves 1 step
    while (fast != nullptr) {
        fast = fast->next;
        if (fast != nullptr) {
            fast = fast->next;
        }
        slow = slow->next;
    }

    // Slow will be at the middle node
    return slow;
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Get middle node using length-based approach
    Node* mid1 = middleNode_LengthBased(head);
    cout << "Middle (Length Method): " << mid1->data << endl;

    // Get middle node using fast-slow pointer approach
    Node* mid2 = middleNode_FastSlow(head);
    cout << "Middle (Fast-Slow Method): " << mid2->data << endl;

    return 0;
}