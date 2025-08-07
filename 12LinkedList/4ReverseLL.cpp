#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next = nullptr;
    }
};



// //Iterative approach
// Node* reverseLL(Node* &head){
//     Node* prev = nullptr;
//     Node* curr = head;

//     while(curr != nullptr){
//         Node* forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;

//     }
//     return prev;
// }




//Recursive approach
Node* reverseLL(Node* head){
    // Base cases: empty list or single node
    if (head == nullptr || head->next == nullptr)
        return head;

    // Recursively reverse from head->next onward
    Node* newHead = reverseLL(head->next);

    // Place head at the end of reversed sublist
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}


int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    // Reverse the linked list
    Node* newHead = reverseLL(head);

    // Print reversed linked list
    Node* temp = newHead;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}