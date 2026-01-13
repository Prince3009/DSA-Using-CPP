#include <bits/stdc++.h>
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

// Utility: Insert node at tail
void insertAtTail(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) temp = temp->next;
    temp->next = newNode;
}

// Utility: Print list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// -----------------------------
// Approach 1 : Brute Force O(n^2)
// -----------------------------
Node* removeDuplicates1(Node* head) {
    if (head == nullptr) return nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* prev = curr;
        Node* temp = curr->next;

        while (temp != nullptr) {
            if (curr->val == temp->val) {
                // Duplicate found
                Node* toDelete = temp;
                prev->next = temp->next;
                temp = temp->next;
                delete toDelete;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}





// -----------------------------
// Approach 2 : Sorting + removing duplicates
// O(n log n) time, O(n) space
// -----------------------------
Node* removeDuplicates2(Node* head) {
    if (head == nullptr) return nullptr;

    // Step 1: copy values into a vector
    vector<int> vals;
    Node* temp = head;
    while (temp != nullptr) {
        vals.push_back(temp->val);
        temp = temp->next;
    }

    // Step 2: sort values
    sort(vals.begin(), vals.end());


    // Step 3: rebuild list without duplicates
    Node* newHead = new Node(vals[0]);
    Node* curr = newHead;
    for (int i = 1; i < vals.size(); i++) {
        if (vals[i] != vals[i - 1]) {
            curr->next = new Node(vals[i]);
            curr = curr->next;
        }
    }
    return newHead;
}





// -----------------------------
// Approach 3 : Using Hash Map (unordered_set)
// O(n) time, O(n) space
// -----------------------------
Node* removeDuplicates3(Node* head) {
    if (head == nullptr) return nullptr;

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = nullptr;

    while (curr != nullptr) {
        if (seen.find(curr->val) != seen.end()) {
            // duplicate → delete
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            seen.insert(curr->val);
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}





int main() {
    Node* head = nullptr;
    insertAtTail(head, 4);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 4);

    cout << "Original List: ";
    printList(head);

    // Approach 1
    Node* h1 = removeDuplicates1(head);
    cout << "After Removing Duplicates (Approach 1 - Brute Force): ";
    printList(h1);

    // Rebuild list for Approach 2
    head = nullptr;
    insertAtTail(head, 4);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    Node* h2 = removeDuplicates2(head);
    cout << "After Removing Duplicates (Approach 2 - Sorting): ";
    printList(h2);

    // Rebuild list for Approach 3
    head = nullptr;
    insertAtTail(head, 4);
    insertAtTail(head, 2);
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    Node* h3 = removeDuplicates3(head);
    cout << "After Removing Duplicates (Approach 3 - Hashing): ";
    printList(h3);

    return 0;
}
