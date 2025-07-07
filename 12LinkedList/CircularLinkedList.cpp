#include<bits/stdc++.h>
using namespace std;

// Definition of the Node class
class Node{
    public:
    int data;      // stores the value of the node
    Node* next;    // pointer to the next node

    Node(int d){   // constructor to initialize a node
        this-> data = d;
        this -> next = nullptr;
    }
};

// Function to insert a node with value 'd' after the node with value 'element'
void insertNode(Node* &tail, int element, int d){
    
    if(tail == nullptr){              // if the list is empty
        Node* newNode = new Node(d);  // create a new node
        tail = newNode;               // set tail to the new node
        newNode -> next = newNode;    // make it circular
    }
    
    else{
        // list is not empty
        // assuming that 'element' is present in the list
        Node* curr = tail;
        
        // find the node with the given element
        while(curr -> data != element){
            curr = curr -> next;
        }

        // create a new node
        Node* newNode = new Node(d);
        newNode -> next = curr -> next; // new node points to the next of current node
        curr -> next = newNode;         // current node points to the new node
    }
}

// Function to print the circular linked list
void print(Node* &tail){
    Node* temp = tail;               // start from the tail
    do{
        cout << temp -> data << " "; // print current node's data
        temp = temp -> next;         // move to next node
    }
    while(temp != tail);             // stop when back to the tail
    cout << endl;
}

// Function to delete the node with the given element
void deleteNode(Node* &tail, int element){
    if(tail == nullptr) return;      // if list is empty, return
    else{
        Node* prev  = tail;          // pointer to previous node
        Node* curr = prev -> next;  // pointer to current node (start from next of tail)

        // find the node to be deleted
        while(curr -> data != element){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next; // remove current node from the list

        // if the deleted node is the tail, update tail
        if(tail == curr){
            tail = prev;
        }

        curr -> next = nullptr;      // break the link of deleted node
        delete curr;                 // free memory
    }
}

int main(){
    Node* tail = nullptr; // initially, the list is empty

    insertNode(tail, 4, 3);   // inserts 3 in the empty list (element 4 is ignored here)
    insertNode(tail, 3, 5);   // inserts 5 after 3
    insertNode(tail, 5, 6);   // inserts 6 after 5
    insertNode(tail, 3, 7);   // inserts 7 after 3
    insertNode(tail, 6, 5);   // inserts 5 after 6

    print(tail);              // prints the list

    deleteNode(tail, 5);      // deletes the first node with data 5
    deleteNode(tail, 5);      // deletes the second node with data 5

    print(tail);              // prints the updated list
}