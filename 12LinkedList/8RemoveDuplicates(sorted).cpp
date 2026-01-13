#include <iostream>
using namespace std;

// Node definition for singly linked list
class Node {
public:
    int val;
    Node* next;
    Node(int value) {
        val = value;
        next = nullptr;
    }
};



// Function to remove duplicates from sorted linked list
Node* deleteDuplicates(Node* head) {
    if (head == nullptr) return nullptr;
    Node* curr = head;

    while (curr != nullptr && curr->next != nullptr) {
        if (curr->val == curr->next->val) {
            // Skip duplicate node
            Node* next_next = curr->next->next;
            delete curr->next;       
            curr->next = next_next;  
        } else {
            curr = curr->next;       // Move forward if no duplicate
        }
    }
    return head;
}



// Insert node at end
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

// Print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Create list: 1 -> 1 -> 2 -> 3 -> 3
    insertAtTail(head, 1);
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 3);

    cout << "Original List: ";
    printList(head);

    head = deleteDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
