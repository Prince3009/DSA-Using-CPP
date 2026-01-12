/*---------------------Floyd’s Cycle Detection Algorithm (Tortoise and Hare method)------------------------*/ 

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

// Function to check if linked list is circular
bool isCircular(Node* head) {
    if (head == nullptr) return false;  // Empty list is not circular

    Node* slow = head;
    Node* fast = head;

    // Move slow by 1 and fast by 2
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true; // Cycle detected
        }
    }
    return false; // No cycle
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


void makeCircular(Node* head) {
    if (head == nullptr) return;
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;  // last node points to head
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

    for (int i = 1; i <= 4; i++) {
        insertAtTail(head, i);
    }

    cout << "List is circular? " << (isCircular(head) ? "Yes" : "No") << endl;

    // Make it circular: last node points to head
    makeCircular(head);

    cout << "After making circular, List is circular? " 
         << (isCircular(head) ? "Yes" : "No") << endl;

    return 0;
}
