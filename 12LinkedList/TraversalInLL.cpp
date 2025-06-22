//Traversing through linked list and returning head
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;       // Value stored in the node
    Node* next;     // Pointer to the next node

    // Constructor to initialize node with a value
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* arrayTOLL(vector<int> &arr){
     // Create the head node using the first element of the array
    Node* head = new Node(arr[0]);

    // 'mover' helps to keep track of the last node while building the list
    Node* mover = head;

    // Loop through the rest of the array and create new nodes
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]); // Create new node
        mover->next = temp;            // Link current last node to the new node
        mover = temp;                  // Move 'mover' to the new last node
    }
    return head;
}


//Length of Linked List
int lengthOFLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    Node* head = arrayTOLL(arr);
    
    //Prints the head
    cout << head->data <<endl;


    //Traversal
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    cout << lengthOFLL(head);
}