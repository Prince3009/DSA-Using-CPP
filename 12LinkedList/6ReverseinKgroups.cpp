#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* reverseKGroup(Node* head, int k) {
    if (head == nullptr) return nullptr;

    // Step 1: Check if there are at least k nodes ahead
    Node* temp = head;
    for (int i = 0; i < k; i++) {
        if (temp == nullptr) return head; // fewer than k nodes, no reversal
        temp = temp->next;
    }

    // Step 2: Reverse exactly k nodes
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = nullptr;
    int count = 0;

    while (curr != nullptr && count < k) {
        forward = curr->next;  
        curr->next = prev;     
        prev = curr;          
        curr = forward;         
        count++;
    }

    // Step 3: Recursively call for the remaining list
    if (forward != nullptr) {
        head->next = reverseKGroup(forward, k);
    }

    // prev becomes the new head of this block
    return prev;
}


void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main() {
    Node* head = nullptr;

    for (int i = 1; i <= 8; i++) {
        insertAtTail(head, i);
    }

    cout << "Original List: ";
    printList(head);

    int k = 3;            // Size of groups to reverse
    head = reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}
