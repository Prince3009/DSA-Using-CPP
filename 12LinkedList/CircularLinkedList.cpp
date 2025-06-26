#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this-> data = d;
        this -> next = nullptr;
    }
};

void insertNode(Node* &tail, int element, int d){
    
    if(tail == nullptr){              //if the list is empty
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    
    else{
        //list is not empty
        //assuming that elememt is present in linked list
        Node* curr = tail;
        
        while(curr -> data != element){
            curr = curr -> next;
        }

        Node* newNode = new Node(d);
        newNode -> next = curr -> next;
        curr -> next = newNode;
    }
}


void print(Node* &tail){
    Node* temp = tail;
    while()
}
int main(){
    Node* tail = new Node(4);
    insertNode(tail, 4, 3);
}