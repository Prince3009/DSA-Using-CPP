#include<bits/stdc++.h>
using namespace std;

// Node class for a doubly linked list
class Node{
public:
    int data;       // Stores data
    Node* prev;     // Pointer to the previous node
    Node* next;     // Pointer to the next node

    // Constructor to initialize a new node
    Node(int d){
        this-> data = d;
        this -> prev = nullptr;
        this -> next = nullptr;
    }
};

// Function to traverse and print the linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp =  temp -> next;
    }
    cout << endl;
}

// Function to find and return the length of the linked list
int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != nullptr){
        len++;
        temp = temp -> next;
    }
    return len;
}

// Insert a new node at the beginning (head) of the list
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    if (head != nullptr)
        head -> prev = temp; // Update previous head's prev pointer
    head = temp; // Update head to new node
}

// Insert a new node at the end (tail) of the list
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp; // Update tail to new node
}

// Insert a node at any given position (0-based indexing)
void insertAtAnyPos(Node* &head, Node* &tail, int pos, int d){
    // If inserting at head
    if(pos == 0){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int count = 0;

    // Traverse to the node before the desired position
    while(count < pos - 1 && temp != nullptr){
        temp = temp -> next;
        count++;
    }

    // If inserting at the end
    if(temp -> next == nullptr){
        insertAtTail(tail, d);
        return;
    }

    // Insert in between nodes
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

// Delete a node from a specific position (0-based indexing)
void deletion(Node* &head, int pos){
    if (head == nullptr) return; // Empty list

    // Deletion at head
    if(pos == 0){
        Node* temp = head;
        head = temp -> next;
        head -> prev = nullptr; // Set new head's prev to nullptr
        temp -> next = nullptr;  
        delete temp; // Free memory
    }

    else{
        Node* curr = head;
        Node* prev = nullptr;

        int count = 0;

        // Traverse to the node to be deleted
        while(count < pos && curr != nullptr){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        if(curr == nullptr) return; // Position out of bounds

        // Update links to remove the node
        if(curr -> next != nullptr)
            curr -> next -> prev = prev;

        prev -> next = curr -> next;
        curr -> next = nullptr;
        curr -> prev = nullptr;
        delete curr; // Free memory
    }
}

int main(){
    // Creating initial node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head); // Print initial list
    cout << getLength(head) << endl; // Print length

    insertAtHead(head, 13); // Insert 13 at head
    print(head);

    insertAtTail(tail, 33); // Insert 33 at tail
    print(head);

    insertAtAnyPos(head, tail, 1, 21); // Insert 21 at position 1
    print(head);

    deletion(head, 0); // Delete node at position 0 (head)
    print(head);
}