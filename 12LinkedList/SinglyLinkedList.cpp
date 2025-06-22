#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;       // Stores the value of the node
    Node* next;     // Pointer to the next node in the list

    // Constructor to initialize a node with a given value
    Node(int value) {
        this->data = value;   // Assign value to data
        next = nullptr;       // Initialize next pointer to null
    }
};




void insertAtHead(Node* &head, int data) {
    // Create a new node
    Node* temp = new Node(data);
    // Point the new node's next to the current head
    temp->next = head;
    // Update the head to point to the new node
    head = temp;
}




void insertAtTail(Node* &tail, int data) {
    // Create a new node
    Node* temp = new Node(data);
    // Link the current tail's next to the new node
    tail->next = temp;
    // Update the tail to the new node
    tail = temp;
}




void print(Node* &head) {
    Node* temp = head; // Start from the head node
    while(temp != nullptr) {
        // Print the data of the current node
        cout << temp->data << " ";
        // Move to the next node
        temp = temp->next;
    }
}

int main() {
    // Create the first node with data = 10
    Node* node1 = new Node(10);

    // Set head and tail both pointing to node1 initially
    Node* head = node1;
    print(head);  // Output: 10
    cout << endl;

    // Insert a new node with data = 12 at the beginning
    insertAtHead(head, 12);   // List: 12 -> 10
    print(head);              // Output: 12 10
    cout << endl;

    // Initialize tail to the last known node (node1)
    Node* tail = node1;

    // Insert new nodes at the end
    insertAtTail(tail, 20);   // List: 12 -> 10 -> 20
    insertAtTail(tail, 60);   // List: 12 -> 10 -> 20 -> 60

    print(head);              // Output: 12 10 20 60
}
